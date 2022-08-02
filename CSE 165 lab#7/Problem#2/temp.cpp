#include <iostream>
#include <vector>
using namespace std;

int fib(bool value  = false){
    
    static int first = 0;
    static int second = 1;  
    static int reset;
    
if(value){
    first = 0;
    second = 1;
}
    reset = first + second;
    first = second;
    second = reset; 
    
return reset;
}

int main() {
for (int i = 0; i < 1; ++i)
    cout<< fib() << " ";
    cout << "\n";
    cout << fib(true) << " ";
    
for (int i = 0; i < 3; ++i)
    cout << fib() << " ";
    cout << "\n";
    cout << fib(true) << " ";
    
    
for (int i = 0; i < 5; ++i)
    cout << fib() << " ";
    cout << "\n";
    cout << fib(true) << " ";

for (int i = 0; i < 8; ++i)
    cout << fib() << " ";
    cout << "\n";
    cout << fib(true) << " ";
        
for (int i = 0; i < 11; ++i)
    cout << fib() << " ";
    cout << "\n";
    
return 0;
} 