#include <iostream>
#include <vector>
using namespace std;

class Counted {
public:   
Counted() : id(count++){
cout << "counted " << id << endl;
}
~Counted(){
cout << "~counted " << id << endl;
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
    
    vector<Counted* > vec;   
    for(int i  = 0; i < 5; i++){
        vec.push_back(new Counted);
        vec[i]-> f();
    }   
    for(int j  = 0; j < 5; j++){
        Counted *  b = vec.back();
        vec.pop_back();
        delete b;
    }
}
