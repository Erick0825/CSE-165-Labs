#include <iostream>
#include <cstdlib>
using namespace std;

class Base {
public:

Base(): id(++count){
    cout << id << endl;
    }
~Base(){
    cout<< "~" << id << endl;
    }
void* operator new[](size_t x){
    cout << "Overloading array: \n";
    void* o1 = ::operator new(x);
    return o1;
}
void operator delete[](void* o2){
    cout << "Deleting overloaded array: \n";
    free(o2);
}
void* operator new(size_t x){
cout << "Overloading object: \n";
void* o3 = ::operator new(x);
return o3;
}
void operator delete(void* o3){
    cout << "Deleting overloaded object: \n";
    free(o3);
    }        
static int count;   
private:
int id;   
};
int Base::count = 0;
int main() {
    Base* o1 = new Base;
    Base* o2 = new Base[5];

    delete o1;
    delete []o2;
}