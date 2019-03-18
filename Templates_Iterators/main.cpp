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
#include <iterator>
#include "Animal.h"

#define PI 3.14159
#define AREA_CIRCLE(radius) (PI*(std::pow(radius, 2)))

template<typename T>
T Add(T val, T val2){
    return val + val2;
}
template<typename T>
T Max(T val, T val2){
    return (val < val2) ? val2 : val;
}


int main(int argc, char **argv)
{
	Animal spot = Animal();
    spot.name = "Pepegasus Bob";
    std::cout << "The animal is " << spot.name << "\n";
    std::cout << "Circle's area is " << AREA_CIRCLE(5) << "\n";
    std::cout << "5+4= " << Add(5, 4) << "\n";
    
	return 0;
}
