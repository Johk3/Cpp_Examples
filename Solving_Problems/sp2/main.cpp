#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

int einstein(std::string equation);

int main(int argc, char **argv)
{
    std::string equation;
//    std::cout << "Gimme the equation you pepega" << "\n";
//    std::cin >> equation;
    equation = "x + 4 = 9";
    std::cout << "Thanks for " << equation << "\n\n";
    
    int answer = einstein(equation);
    std::cout << "Answer: " << std::to_string(answer) << "\n";
    
	return 0;
}

int einstein(std::string equation){
    int switchint;
    int headint;
    std::string unknown;
    bool head = false;
    
    int conclusion;
    
    std::string parsedString;
    
    for(auto letter: equation){
        if(!isspace(letter)){
            parsedString+=letter;
        }
    }
    // Solving the equation
    std::cout << parsedString << "\n";
    
    switchint = parsedString[1];
    headint = parsedString[-1];
    
    std::cout << switchint << " " << headint << "\n";
    
    conclusion = headint-switchint;
    return conclusion;
}