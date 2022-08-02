#include <iostream>
using namespace std;

int main(int argc, char* argv[]) 
{
    cout << "What prime numbers should be printed: ";
    int x; 
    cin >> x;

    int i, j; 
    for( i = 2; i <= x; i++)
    {
        bool primeFound = true;
        for(j = 2; j*j <= i; j++)
        { 
            if(i % j == 0)
            {
                primeFound = false;
                break;
            }
        } //looks for prime numbers by seeing if the number is divisible or not
    if(primeFound == true)
        cout << "Prime numbers: " << i << endl;
    }
}