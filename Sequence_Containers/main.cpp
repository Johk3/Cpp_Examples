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

        
bool isEven(const int& val){
    return (val % 2) == 0;
}


int main(int argc, char **argv)
{
//	std::deque<int> deq1;
//    deq1.assign({11, 12});
//    deq1.push_back(5);
//    deq1.push_front(1);
//    
//    deq1.erase(deq1.begin(), deq1.begin() + 2);
//    
//    for(auto i: deq1){
//        std::cout << i << "\n";
//    }

    // List
//    int arr[9] = {1,2,3,4,5, 5, 5, 8, 2};
//    std::list<int> list1;
//    list1.insert(list1.begin(), arr, arr+5);
//    list1.push_back(1);
//    
//    std::list<int>::iterator it2 = list1.begin();
//    std::advance(it2, 1);
//    std::cout << "2nd index: " << *it2 << "\n";
//    
//    list1.unique();
//    list1.sort();
//    
//    for(auto i : list1){
//        std::cout << i << "\n";
//    }
    // Forward list
    std::forward_list<int> fl1;
    fl1.assign({1,2,3,4,5});
    fl1.push_front(0);
    fl1.pop_front();
    fl1.remove_if(isEven);
    
    for(auto i : fl1){
        std::cout << i << "\n";
    }
    
	return 0;
}
