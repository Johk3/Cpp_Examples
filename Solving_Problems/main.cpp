#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <numeric>
#include <sstream>
#include <vector>

std::string VectorToString(std::vector<std::string>& vec,
    char separator);

std::vector<std::string> StringToVector(std::string theString,
    char separator);

int main(int argc, char **argv)
{
    std::vector<std::string> vCusts(3);
    vCusts[0] = "Bob";
    vCusts[1] = "Is";
    vCusts[2] = "Pepega";
    
    std::string sCusts = VectorToString(vCusts, ' ');
    std::cout << sCusts << "\n";

	return 0;
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

std::string VectorToString(std::vector<std::string>& vec,
    char separator){
    std::string theString = "";
    for(auto cust: vec)
        theString += cust + separator;
        
    return theString;
}
