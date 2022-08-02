#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main () {
 ifstream in("Fillvector.cpp");
 vector <string> vectorf;
 string line;
 while(getline(in, line))
 {
     vectorf.push_back(line);
 }
 for (vector<string>::iterator it = vectorf.begin(); it != vectorf.end(); ++it) {
 line += *it + "\n";     
 } 
 cout << "String of file content:" <<endl;
 cout << line << endl;
 return 0;
}