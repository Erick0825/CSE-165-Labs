#include <iostream>
using namespace std;

int func1(int* initalptr = 0){
static int* arrPtr;
    
if(initalptr){
    arrPtr = initalptr;
    return *arrPtr;
}  
if(*arrPtr < 0){
    cout << "\nEnd - of - Array \n";
    return 0;
} 
return *arrPtr++;
}
int main() {
int array[] = {10,9,8,7,6,5,4,3,2,-1};
    func1(array);
    int a;
    while((a = func1()) != 0){
        cout<< a << " ";
    }
}