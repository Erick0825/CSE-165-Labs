#include <iostream>
#include <string>
using namespace std;

string makeBinaryFromDouble (double num) {
string result = "";
    unsigned char* charPtr =
    reinterpret_cast<unsigned char*>(&num);
    unsigned char val;
    int digit = 69;
for(int index = sizeof(double)-1; index >= 0 ; index -= 1) {
     val = *(charPtr + index);
for(int i = 7; i >= 0; i--) {
 if(val bitand (1 << i))
    result += "1";
    else
     result += "0";

if (digit == 69 || digit == 47)
    result += " ";
    digit--;
    }
}

return result;
}
int main() {
    cout << makeBinaryFromDouble(-2.1) << endl
         << makeBinaryFromDouble(5.6) << endl;
return 0;
}