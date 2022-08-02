#include <iostream>


using namespace std;

int main()
{
    int radius; //variables 
    int area; 
    float pi = 3.14159;
    cout << "Enter the radius of the circle"<<endl;
    cin >> radius;
     area = (radius * radius) * pi; //euation to calculate the area of a circle
     
     cout << "The area of your circle is about "
        << area << " sq ft." <<endl;

    return 0;
}