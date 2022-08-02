#include <iostream>
#include <ctime>
using namespace std;
class Base {
public:
    void fun(){}
    virtual void vvf() {}
};
class Inherit : public Base{};

double vtime (Base* B){

cout << "Virtual call: " << endl;     
    //set up clock time
    clock_t t0 = clock();
    
    for(int i = 0; i < 18000000; i++)
        (B-> vvf)();
    clock_t t1 = clock();
    
    return static_cast<double> (t1 -t0); 
}

double rtime (Base* R){
   cout << "Non-Virtual call: " << endl;
    
    clock_t t00 = clock();
    
    for(int i = 0; i < 18000000; i++)
        (R-> fun)();
    
    clock_t t11 = clock();
    
return static_cast<double> (t11 - t00);    
}
int main() { 
    Inherit timev;
    Inherit timeNv;    
    cout <<vtime(&timev) << endl;
    cout <<rtime(&timeNv) << endl;
} 