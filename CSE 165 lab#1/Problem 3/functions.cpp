#include <iostream> 

void state1 (){
    std::cout<< "Function 1, is a char funtion that print out a char." << std::endl ;
}

char function1 (char c){
   std::cout << "The character is: " << c << std::endl;
    return c;
}

void state2(){
std::cout << "Function 2, is  a int function that adds two ints together"<< std::endl;
}

int function2 (int x, int y){
    return x  +  y;
}

void state3(){
    std::cout << "Function 3, is  a float function that subtracts two floats types." << std::endl;
}

float function3(float a, float b){
    
    return a - b;
}   