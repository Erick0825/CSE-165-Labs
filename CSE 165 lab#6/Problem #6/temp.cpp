#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#define F(x) #x
#define F_(x) F(x)
#define F__LINE__ F_(__LINE__)
using namespace std;


class Base {
public:

Base(){}
~Base(){}

void* operator new(size_t x, string str){
    vec.push_back(str);
    void* ptr = ::operator new(x); 
    return ptr;
}
static void display();
static vector<string> vec;
};
void Base::display() {
for(int i = 0; i < vec.size(); i++)
cout << vec[i] << endl;
}
vector<string> Base::vec;
int main(){
    
    Base* o1;
    Base* o2;

    o1 = new(__FILE__) Base;
    cout<< "Printing file : " << endl;
    o2 = new(F__LINE__) Base;
    cout << "Printng line in file :" << endl;
    Base::display(); 
      
delete o2;
delete o1;
}