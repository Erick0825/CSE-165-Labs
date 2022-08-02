#include <iostream>
#include <algorithm>
using namespace std;

class Vfunc {
private:
    
    //four data members
    int x = 10, y = 11, z = 20, w = 21;
public:   
    //two virual funciton    
    virtual void func() {}    
    virtual void func2() {}
};
#include <iostream>
using namespace std;

int main() {
    Vfunc fun;    
    const char* const intPtr = reinterpret_cast<char*>(&fun);   
    for(int i = 0; i < sizeof(fun); i++){
        int value = *(intPtr+i);
        if( value == 10 || value == 11|| value == 20|| value == 21){
         cout << "Values of the memory for each funcion: " << endl;
         cout << i <<endl;
        }
    }
}