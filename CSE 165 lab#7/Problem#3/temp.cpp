#include <iostream>
using namespace std;

class arrayInt{
public:
    arrayInt() : value (0) {}       
    inline void getArray();
    inline void pArray();
    static void pNumber();

private:
    static const int size = 10;
    const int value;
    int array[size];
    static int number;

};
int arrayInt::number = number;
void arrayInt::getArray(){
    cout << "Enter 10 numbers in an array : " << endl;
    for (int i = 0; i < size; i++) cin>> array[i];
    
}

void arrayInt::pNumber() {
    cout << "Enter static int : ";
    cin >> number;
    cout << "static int: " << number << endl;
    number++;
}

void arrayInt::pArray() {  
    getArray();
    pNumber();
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    cout << array[i] << ' '; cout << endl;
    pNumber();
}

int main() {
    arrayInt arr;
    arr.pArray();
return 0;
}