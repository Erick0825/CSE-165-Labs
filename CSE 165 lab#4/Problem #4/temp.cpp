#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Text{    
private: 
    string file;   
public:   
    Text(){}
    Text(string nameoffile){   
    ifstream f;
    f.open(nameoffile);  
    string data;       
        while(getline(f, data))
            file += data + '\n';
} 
string contents(){   
    return file;
    }    
};
int main() {  
Text object("textfile.txt");
cout<< "Contents of the text file : \n"<< object.contents();    
}