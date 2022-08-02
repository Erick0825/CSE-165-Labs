#include <iostream>
using namespace std;

class Base_X{
public:
    Base_X(int i){}

    void f(){
        cout<< " Base X Return nothing : \n" << endl;
    }
};

class Base_Y:Base_X{
public:
    
    Base_Y(int j):Base_X(j){}
    
    void f(){
        Base_X::f();
        
        cout<< " Base Y Returns nothing : \n" << endl;
    }
};

class Base_Z:Base_X{
public:
    
    Base_Z(int k):Base_X(k){}
    
    void f(){
        Base_X::f();
        
        cout<< " Base Z Returns nothing : \n" << endl;
         
    }
};

class Base_A:Base_Y,Base_Z{
public:
    Base_A(int x):Base_Y(x),Base_Z(x){}
    
    void f(){

        Base_Y::f();
        Base_Z::f();      
        cout<< " Base A Returns nothing : \n" << endl;        
    }
};
int main(){

    Base_A base(10);
    base.f();
} 