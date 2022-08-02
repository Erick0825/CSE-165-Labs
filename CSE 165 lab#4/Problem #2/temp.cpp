#include <iostream>
using namespace std;

int num1;
int num2;

int& ptrAdd(int* a){ 
    int &ref  = num2;
    ref = *a;
    return ref;
}
int main() { 
    cout<< "Choose the number you want to be the designated pointer : " << endl;
    cin>> num1;
    
    num2 =  num1++;
    
    cout<< &num1 << "\a" << endl;
    cout<< ptrAdd(&num1) << endl;
    cout<< &num1 << "\a" << endl;  
}
