#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <numeric>
#include <sstream>
#include <vector>
#include <boost/algorithm/string.hpp>   

std::string TrimWhitespace(std::string theString);

std::vector<std::string> FindWords(std::string theString, std::string compare);

int main(int argc, char **argv){
    std::string aStr = "    Bob is Pepega   ";
//    aStr = TrimWhitespace(aStr);
//    
//    std::cout << aStr << "\n";
    std::vector<std::string> vStr = FindWords(aStr, "Bob Is Retarded");
    for(auto word: vStr){
        std::cout << word << "\n";
    }
    return 0;
}

std::vector<std::string> FindWords(std::string theString, std::string compare){
    std::vector<std::string> output;
    std::string outputString;
    std::vector<std::string> outputCompare;
    std::string outputcstring;
    
    std::vector<std::string> finalOutput;
    
    std::string whitespaces(" \t\f\n\r");
    theString.erase(theString.find_last_not_of(whitespaces) + 1);
    theString.erase(0, theString.find_first_not_of(whitespaces));
    compare.erase(theString.find_last_not_of(whitespaces) + 1);
    compare.erase(0, theString.find_first_not_of(whitespaces));
    
    std::istringstream coss(compare);
    std::istringstream iss(theString);
    
    while(getline(coss, outputcstring, ' ')){
        outputCompare.push_back(outputcstring.c_str());
    }
    
    while(getline(iss, outputString, ' ')){
        output.push_back(outputString.c_str());
    }

    for(auto word: output){
        for(auto comword: outputCompare){
            if(boost::algorithm::to_lower_copy(word) == boost::algorithm::to_lower_copy(comword)){
                finalOutput.push_back(word);
            }
        }
    }
    
    return finalOutput;
}

std::string TrimWhitespace(std::string theString){
    std::string whitespaces(" \t\f\n\r");
    theString.erase(theString.find_last_not_of(whitespaces) + 1);
    theString.erase(0, theString.find_first_not_of(whitespaces));
    return theString;
}