#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

std::vector<std::string> StringToVector(std::string theString,
    char separator);
    
bool isPrimeNumber(std::string number);

int main(int argc, char **argv)
{
    std::string number;
    std::cout.setf(std::ios::boolalpha)
    std::cout << "I will check if its a prime number:" << "\n";
    getline(std::cin, number);
    
    bool truth = isPrimeNumber(number);
    
    std::cout << "That is " << truth << "\n";
    
	return 0;
}

bool isPrimeNumber(std::string number){
    std::vector<std::string> polishedNumber = StringToVector(number, ' ');
    int checkNumber = std::stoi(polishedNumber[0]);
    if(checkNumber == 2 || checkNumber%2 == 1){
        return true;
    }
    return false;
}

std::vector<std::string> StringToVector(std::string theString,
                                        char separator){
    std::vector<std::string> vecsWords;
    
    std::stringstream ss(theString);
    std::string sIndivStr;
    while(getline(ss, sIndivStr, separator)){
        vecsWords.push_back(sIndivStr);
    }
    return vecsWords;
}

