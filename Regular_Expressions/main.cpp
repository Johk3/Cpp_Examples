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
#include <thread>
#include <chrono>
#include <ctime>
#include <mutex>
#include <deque>
#include <list>
#include <forward_list>

#include <set>
#include <map>
#include <stack>
#include <queue>

#include <regex>


void PrintMatches(std::string str, std::regex reg){
    std::smatch matches;
    std::cout << std::boolalpha;
    while(std::regex_search(str, matches, reg)){
        std::cout << "Is there a match : " << matches.ready() << "\n";
        std::cout << "Are there no matches : " << matches.empty() << "\n";
        std::cout << "Number of matches : " << matches.size() << "\n";
        
        std::cout << matches.str(1) << "\n";
        str = matches.suffix().str();
        std::cout << "\n";
    }
}


int main(int argc, char **argv)
{
//    std::string str = "Deadlocks ape is bob who is apex pepega";
//    std::regex reg ("(ape[^ ]?)");
//    PrintMatches(str, reg);
//    
//    std::string str1 = "Fat bat bob is twat tat wat";
//    std::regex reg1 ("([C-Fc-f]at)");
//    
//    std::string bob = std::regex_replace(str1, reg1, "blueface");
//    PrintMatches(str1, reg1);
//    std::cout << bob << "\n";
//
//    std::string str2 = "F.B.I C.I.A BOBISKAY";
//    std::regex reg2 ("([^ ]\..\..\.)");
//    
//    PrintMatches(str2, reg2);
    
    std::string email = "db@aol.com jht@gmail.com jossullaeiootyylitajuu@gmail.com";
    std::regex regmail ("[\\w._%+-]{1,20}@[\\w.-]{2,20}.[A-Za-z]{2,3}");
    
    PrintMatches(email, regmail);
    
	return 0;
}
