#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::vector<int> randomVector(int rangeList, int rangeInt);

int main(int argc, char **argv)
{
    std::cout << "Returning a random vector list" << "\n";
    int xrange = 1000;
    int yrange = 1000;
    
    std::vector<int> randomList = randomVector(xrange, yrange);
    for(auto number: randomList){
        std::cout << "Found " << number << "\n";
    }
    
	return 0;
}

std::vector<int> randomVector(int rangeList, int rangeInt){
    std::vector<int> randInts;
    for(int i = 0; i < rangeList ; i++){
        randInts.push_back(rand());
    }
    
    return randInts;
}


