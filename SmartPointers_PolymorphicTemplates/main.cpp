#include <stdio.h>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <iterator>
#include <memory>

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <numeric>
#include <sstream>
#include <vector>


class Pizza{
public:
    virtual void MakePizza() = 0;
};

class NYStyleCrust{
public:
    std::string AddIngredient(){
        return "Crust so thin you can see through it\n\n";
    }
};

class DeepDishCrust{
public:
    std::string AddIngredient(){
        return "Super Awesome Chicago Deep Dish\n\n";
    }
};

template <typename T>
class LotsOfMeat: public T{
public:
    std::string AddIngredient(){
        return "Lots of Random Meat, " + T::AddIngredient();
    }
};

template <typename T>
class Vegan: public T{
public:
    std::string AddIngredient(){
        return "Vegan Cheese, Veggies, " + T::AddIngredient();
    }
};

template <typename T>
class MeatNYStyle: public T, public Pizza{
public:
    void MakePizza(){
        std::cout << "Meat NY Style Pizza : " << T::AddIngredient();
    }
};

template <typename T>
class VeganDeepDish: public T, public Pizza{
public:
    void MakePizza(){
        std::cout << "Vegan deep dish : " << T::AddIngredient();
    }
};


int main(int argc, char **argv)
{
	// Not a smart pointer 
//    int amtToStore;
//    amtToStore = 10;
//    // This is the smart pointer
//    std::unique_ptr<int[]> pNums(new int[amtToStore]);
//    
//    if(pNums != NULL){
//        int i = 0;
//        while(i < amtToStore){
//            std::cout << "storing 5\n";
//            pNums[i] = 5;
//            i++;
//        }
//    }
//    std::cout << "You entered these numbers\n";
//    for(int i = 0; i < amtToStore; i++){
//        std::cout << pNums[i] << "\n";
//    }
    std::vector<std::unique_ptr<Pizza>> pizzaOrders;
    pizzaOrders.emplace_back(new MeatNYStyle<LotsOfMeat<NYStyleCrust>>());
    pizzaOrders.emplace_back(new MeatNYStyle<Vegan<DeepDishCrust>>());
    
    for(auto &pizza: pizzaOrders){
        pizza->MakePizza();
    }
    
	return 0;
}
