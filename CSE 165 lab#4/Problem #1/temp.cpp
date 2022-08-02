#include <iostream>
using namespace std;
class Subject{
public:
     virtual void f(){}
     virtual void g(){}
     virtual void h(){}
};
class Proxy:
public Subject {
private: 
Subject* strPtr;   
//assigns pointer to the from the subject.
public:
    Proxy(Subject* ptr) : Subject(), strPtr(ptr) {}
    void set(Subject* ptr){strPtr = ptr;}
    void f(){strPtr -> f();}
    void g(){strPtr -> g();}
    void h(){strPtr -> h();}        
};
class Implementation1 :
public Subject {
    
public:
    void f(){
        cout<< "Mango " <<endl;
    }
    void g(){ 
        cout<< "Orange" <<endl; 
    } 
    void h(){
        cout<< "Strawberry " << endl;  
    }
};
class Implementation2 :
public Subject {
    
public:
    void f(){  
        cout<< "Cucumber " << endl; 
    }
    void g(){ 
        cout<< "Onion " << endl;
    }
    void h(){
        cout<< "Potato  " << endl;
    }
};
int main() {
    Implementation1 i1;
    Implementation2 i2;

    Proxy p(&i1);
    
    cout<< "Vegtables : \n"<< endl;
    
    p.f(); p.g(); p.h();
    
    cout<< "\n";

    p.set(&i2);

    cout<< "Fruits : \n" << endl;
    p.f(); p.g(); p.h();  
}