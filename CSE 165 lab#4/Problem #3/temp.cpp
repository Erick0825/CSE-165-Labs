#include <iostream>
#include <string>
using namespace std;
//create constructor.
class AnArray {  
public:
    enum {size = 10};
    int array[size];
    
    AnArray() {

    cout << "Enter 10 numbers in an array : \n" <<endl;
        for (int i = 0; i < size; i++)
            cin>> array[i]; 
    }
    
};
int main() {

AnArray a;
AnArray* aPtr = &a;
int (AnArray::*ptr)[10] = &AnArray::array;  
cout << "The Value at index 5 is: ";
cout << *( aPtr->*ptr + 4 ) << endl;
return 0;
} 
/// Yes you can, you index through this array using a pointer to member