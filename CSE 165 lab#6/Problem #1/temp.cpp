#include <iostream>
using namespace std;

class Counted {
public:
    Counted() : id(count++) { 
    cout << "counted " << id << endl;
    }
    ~Counted() {
    cout << "~counted " << id << endl;
    }
private:
static int count; 
int id;
};

int Counted::count = 0;
int main() {
Counted c1;
Counted c2;
Counted c3;
Counted c4;
Counted c5;

return 0;
}