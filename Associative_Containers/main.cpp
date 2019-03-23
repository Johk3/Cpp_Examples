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

int main(int argc, char **argv)
{
    // Set 
//	std::set<int> set1 {5,4,3,2,1,1};
//    std::cout << "Size: " << set1.size() << "\n";
//    
//    set1.insert(0);
//    std::set<int>::iterator it = set1.begin();
//    it++;
//    set1.erase(5);
//    it = set1.end();
//    std::advance(it, -2);
//    set1.erase(it, set1.end());
//    int arr[] = {6,7,8,9};
//    set1.insert(arr, arr+4);
    
    // Maps
    
//    std::map<int, std::string> map1;
//    map1.insert(std::pair <int, std::string> (1, "Pepega"));
//    map1.insert(std::pair <int, std::string> (2, "Forsaan"));
//    
//    std::map<int, std::string>::iterator it2;
//    std::map<int, std::string>::iterator it3;
//    auto match = map1.find(1);
//    std::cout << "Key is " << match->second << "\n";
//    
//    // Multimap
//    std::multimap<int, std::string> mmap1;
//    mmap1.insert(std::pair <int, std::string> (1, "Pepega"));
//    mmap1.insert(std::pair <int, std::string> (1, "Transparent"));
//    
//    for(it3 = mmap1.begin(); it3 != mmap1.end(); it3++){
//        std::cout << "Key " << it3->first << "\n";
//        std::cout << "Key " << it3->second << "\n";
//    }
//    std::cout << "\n\n";
//    for(it2 = map1.begin(); it2 != map1.end(); it2++){
//        std::cout << "Key " << it2->first << "\n";
//        std::cout << "Key " << it2->second << "\n";
//    }
    
    //  Adaptive containers
//    std::stack<std::string> custs;
//    custs.push("Pepega");
//    custs.push("Forsaan");
//
//    int size = custs.size();
//    
//    if(!custs.empty()){
//        for(int i = 0; i < size; i++){
//            std::cout << custs.top() << "\n";
//            custs.pop();
//        }
//    }
    // Enums
    enum day{Mon=1, Tues, Wed, Thur, Fri=6};
    enum day tuesday = Tues;
    std::cout << "Tuesday: " << tuesday << "\n";

    
	return 0;
}
