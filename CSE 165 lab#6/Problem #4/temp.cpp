#include <iostream>
#include <vector>
#include "PStash.cpp"
#include "PStash.h"
#include "require.h"
using namespace std;

class Counted {
public:    
Counted() : id(count++){
cout << "Counted " << id << endl;
}
~Counted(){
cout << "~Counted " << id << endl;
}   
void f() {
cout << id << endl;
} 
int id;   
private:
static int count;    
};
int Counted::count = 0;
int main() {
PStash vec;
    
for(int i  = 0; i < 5; i++){
vec.add(new Counted);
((Counted*)vec[i])->f();
}
for(int j  = 0; j < 5; j++){
delete (Counted*)vec.remove(j);
    }
}