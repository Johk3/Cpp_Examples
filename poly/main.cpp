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

struct Shape{
    double length, width;
    Shape(double l = 1, double w = 1){
        length = l;
        width = w;
    }
    double Area(){
        return length * width;
    }
};
struct Circle : Shape{
    Circle(double width){
        this->width = width;
    }
    double Area(){
        return 3.14159 * std::pow((width/2), 2);
    }
};


int main(int argc, char **argv)
{
	Shape shape(10, 10);
    std::cout << "Square Area : " << shape.Area() << "\n";
    
    Circle circle(10);
    std::cout << "Circle Area : " << circle.Area() << "\n";
    
    Shape rectangle{10, 15};
    std::cout << "Rectangle Area : " << rectangle.Area() << "\n";
    
	return 0;
}
