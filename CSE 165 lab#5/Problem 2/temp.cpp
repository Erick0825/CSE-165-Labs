#include <iostream>
#include <string>

using namespace std;

class Pet {
  string pname;
public:
  Pet(const string& petName) : pname(petName) {}
  virtual string name() = 0;
  virtual string speak() = 0;
};

string Pet::name() {
return pname;}

class Dog : public Pet {
public:
Dog(const string& petName) : Pet(petName) {}
virtual string sit(){
return Pet::name() + "sits"; }

string speak()
{ return Pet::name() + " 'Barked!'"; }

string name() {
return Pet::name(); }
};

int main() {
  Dog* p = new Dog("Buster");
  Pet* p2 = p;
cout << p->speak();
}