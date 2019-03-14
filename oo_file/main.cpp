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


class Box{
public:
    double length, width, breadth;
    std::string boxString;
    Box(){
        length = 1, width = 1, breadth = 0;
    }
    Box(double l, double w, double b){
        length = l, width = w, breadth = b;
    }
    Box& operator ++ (){
        length++;
        width++;
        breadth++;
        return *this;
    }
    operator const char*(){
        std::ostringstream boxStream;
        boxStream << "Box : " <<
                    length << ", " <<
                    width << ", " <<
                    breadth;
        boxString = boxStream.str();
        return boxString.c_str();
    }
    Box operator + (const Box& box2){
        Box boxSum;
        boxSum.length = length + box2.length;
        boxSum.width = width + box2.width;
        boxSum.breadth = breadth + box2.breadth;
        return boxSum;
    }
    
    double operator [] (int x){
        if(x == 0){
            return length;
        } else if(x == 1){
            return width;
        } else if(x == 2){
            return breadth;
        } else{
            return 0;
        }
    }
    
    bool operator == (const Box& box2){
        return ((length == box2.length) &&
                (width == box2.width) &&
                (breadth == box2.breadth));
    }
};

int main(int argc, char **argv)
{
	Box box(10, 10, 10);
    ++box;
    Box bob(20,20,20);
    
    std::cout << box << "\n";
    std::cout << "Box + Bob = " << box + bob << "\n";
    
	return 0;
}
