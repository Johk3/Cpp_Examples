#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <numeric>
#include <sstream>
#include <vector>
#include <cmath>
#include <cfenv>
#include <algorithm>
#include <thread>
#include <chrono>
#include <ctime>
#include <mutex>

int GetRandom(int max){
    srand(time(NULL));
    return rand() % max;
}

void ExecuteThread(int id){
    // g++ main.cpp -lpthread && ./a.out to run this
    auto nowTime = std::chrono::system_clock::now();
    std::time_t sleepTime = std::chrono::system_clock::to_time_t(nowTime);
    tm myLocalTime = *localtime(&sleepTime);
    
    std::cout << "Thread " << id << " Sleep Time : " << std::ctime(&sleepTime) << "\n";
    std::cout << "Day : " << myLocalTime.tm_mon << "\n";
    std::cout << "Years : " << myLocalTime.tm_mday << "\n";
    std::cout << "Hours : " << myLocalTime.tm_year << "\n";
    std::cout << "Minutes : " << myLocalTime.tm_min << "\n";
    std::cout << "Seconds : " << myLocalTime.tm_sec << "\n\n";
    
    std::this_thread::sleep_for(std::chrono::seconds(GetRandom(5)));
    nowTime = std::chrono::system_clock::now();
    sleepTime = std::chrono::system_clock::to_time_t(nowTime);
    std::cout << "Thread " << id << " Awake Time : " << std::ctime(&sleepTime) << "\n";
    
}

// Part 2 
std::string GetTime(){
    auto nowTime = std::chrono::system_clock::now();
    std::time_t sleepTime = std::chrono::system_clock::to_time_t(nowTime);
    return std::ctime(&sleepTime);
}
double acctBalance = 100;

std::mutex acctLock;

void GetMoney(int id, double withdrawal){
    std::lock_guard<std::mutex> lock(acctLock);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << id << " tries to withdrawal $ " << withdrawal << " on " << GetTime() << "\n";
    
    if((acctBalance - withdrawal) >= 0){
        acctBalance -= withdrawal;
        std::cout << "Current balance is $ " << acctBalance << "\n";
    }else{
        std::cout << "Not enough money in account\n";
        std::cout << "Current balance is $ " << acctBalance << "\n";
    }
}

std::mutex vectLock;
std::vector<unsigned int> primeVect;

void FindPrimes(unsigned int start, unsigned int end){
    for(unsigned int x = start; x <= end; x += 2){
        for(unsigned int y = 2; y < x; y++){
            if((x%y) == 0){
                break;
            }else if((y+1) == x){
                vectLock.lock();
                primeVect.push_back(x);
                vectLock.unlock();
            }
        }
    }
}

void FindPrimesWithThreads(unsigned int start, unsigned int end, unsigned int numThreads){
    std::vector<std::thread> threadVect;
    unsigned int threadSpread = end / numThreads;
    unsigned int newEnd = start + threadSpread - 1;
    for(unsigned int x = 0; x < numThreads; x++){
        threadVect.emplace_back(FindPrimes, start, end);
        start += threadSpread;
        newEnd += threadSpread;
    }
    for(auto& t: threadVect){
        t.join();
    }
}


int main(int argc, char **argv)
{
    // Example thread application
//    std::thread th1(ExecuteThread, 1);
//    th1.join();
//    std::thread th2(ExecuteThread, 2);
//    th2.join();
    
    // Bank transaction demo
//    std::thread threads[10];
//    for(int i = 0; i < 10; i++){
//        threads[i] = std::thread(GetMoney, i, 15);
//    }
//    for(int i = 0; i < 10; i++){
//        threads[i].join();
//    }
    int startTime = clock();
    FindPrimesWithThreads(1, 100000, 3);
    int endTime = clock();
    for(auto i: primeVect)
        std::cout << i << "\n";
        
    std::cout << "Execution time : " << (endTime - startTime)/double(CLOCKS_PER_SEC) << std::endl;

	return 0;
}

