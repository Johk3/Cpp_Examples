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
#include <fstream>
#include <functional>

double MultBy2(double num){
    return num * 2;
}

double DoMath(std::function<double(double)> func, double num){
    return func(num);
}

bool isOdd(int num){
    return num == 1;
}

std::vector<int> GenerateRandVec(int numOfNums, int min, int max);

std::vector<int> returnOdds(std::function<bool(int)> func, std::vector<int> numList){
    std::vector<int> results;
    
    for(auto num: numList){
        if(func(num)){
            results.push_back(num);
        }
    }
    std::cout << "Found " << results.size() << " heads";
    return results;
}

int main(int argc, char **argv)
{
    auto odd = isOdd;
    std::vector<int> randNums = GenerateRandVec(50, 0, 1);
    
    std::vector<int> foundOdds = returnOdds(odd, randNums);
    
	return 0;
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