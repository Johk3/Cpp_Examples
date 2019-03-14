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


int main(int argc, char **argv){
    std::ofstream writeToFile;
    std::ifstream readFromFile;
    std::string txtToWrite = "";
    std::string txtFromFile = "";
    int lineNumbers;
    
    writeToFile.open("test.txt", std::ios_base::out | std::ios_base::trunc);
    if(writeToFile.is_open()){
        writeToFile << "Story of a pepega Bob\n";
        txtToWrite = "Bob is a pepega";
        writeToFile << txtToWrite;
        writeToFile.close();
    }
    
    readFromFile.open("test.txt", std::ios_base::in);
    if(readFromFile.is_open()){
        while(readFromFile.good()){
            getline(readFromFile, txtFromFile);
            lineNumbers = txtFromFile.length();
            std::cout << txtFromFile << "\n";
            std::cout << "Line length = " << lineNumbers << "\n";
        }
        readFromFile.close();
    }
    
    return 0;
}
