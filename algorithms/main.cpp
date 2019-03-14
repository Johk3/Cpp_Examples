#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <numeric>
#include <sstream>
#include <vector>
#include <cmath>
#include <cfenv>

void BubbleSort(std::vector<int>& theVec);

std::vector<int> GenerateRandVec(int numOfNums, int min, int max);

void PrintHorzVector(std::vector<int>& theVec);

int Fibonacci(int numbah);

int main(int argc, char **argv)
{
//	std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
//    BubbleSort(vecVals);
//    for(auto x: vecVals)
//        std::cout << x << "\n";

//    std::vector<int> theVec = {10, 8, 2, 5, 9, 11, 6, 14};
//    PrintHorzVector(theVec);

    int numbah = 5;
    int fib = Fibonacci(numbah);
    std::cout << fib << "\n";
    
	return 0;
}

int Fibonacci(int numbah){
    int result;
    int last = 0;
    int first = 1;

    int i = 0;
    bool go = true;
    while(go){
        if(first == numbah){
            result = last;
            break;
        }
        first = first + last;
        last = first - last;
        std::cout << last << " " <<  first << "\n";
        if(i > 5)
            go = false;
        i += 1;
    }
    return 1;
}

void PrintHorzVector(std::vector<int>& theVec){
    int dashes = std::ceil(theVec.size() * 5);
    
    for(int n = 0; n < dashes; n++)
        std::cout << "-";
    std::cout << "\n";
    
    for(int n = 0; n < theVec.size(); n++)
        printf("| %2d", n);
    std::cout << "\n";
    
    for(int n = 0; n < dashes; n++)
        std::cout << "-";
    std::cout << "\n";
    
    for(int n = 0; n < theVec.size(); n++)
        printf("| %2d", theVec[n]);
    std::cout << "\n";
    
    for(int n = 0; n < dashes; n++)
        std::cout << "-";
    std::cout << "\n";
}

std::vector<int> GenerateRandVec(int numOfNums, int min, int max){
    std::vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;
    
    while(i < numOfNums){
        randVal = min + std::rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}

void BubbleSort(std::vector<int>& theVec){
    int i = theVec.size() -1;
    while(i >= 1){
        int j = 0;
        while(j < i){
            printf("\nIs %d > %d\n", theVec[j], theVec[j + 1]);
            if(theVec[j] >= theVec[j+1]){
                std::cout << "Switch\n";
                int temp = theVec[j];
                theVec[j] = theVec[j+1];
                theVec[j+1] = temp;
            } else{
                std::cout << "Dont Switch!\n";
            }
            j += 1;
            
            for(auto k: theVec){
                std::cout << k << ", ";
            }
            
        }
        std::cout << "\nEnd of Round\n";
        i -= 1;
    }
}
