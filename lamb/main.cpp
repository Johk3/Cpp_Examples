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

std::vector<int> GenerateRandVec(int numOfNums, int min, int max);

std::vector<int> GenerateFibList(int max);

int main(int argc, char **argv)
{
//    std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
//	
//    for(auto val: vecVals)
//        std::cout << val << "\n";
//    std::cout << "\n\n";

    std::vector<int> listOffFibs = GenerateFibList(10);
    for(auto val: listOffFibs)
        std::cout << val << "\n";
    
//    int divisor = 2;
//    std::vector<int> vecVals2;
//    
//    std::copy_if(vecVals.begin(), vecVals.end(),
//                std::back_inserter(vecVals2),
//                [divisor](int x){return (x%divisor) == 0;});
    
//    std::sort(vecVals.begin(), vecVals.end(),
//                [](int x, int y){return x < y;});
//                
//    for(auto val: vecVals2)
//        std::cout << val << "\n";
    
	return 0;
}

std::vector<int> GenerateFibList(int max){
    std::vector<int> results;
    int first = 1;
    int last = 0;
    
    for(int i = 0; i < max; i++){
        first = first + last;
        last = first - last;
        
        results.push_back(first);
    }
    return results;
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