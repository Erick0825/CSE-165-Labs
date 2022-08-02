class A {
 int i;
public:
 A(int ii) : i(ii) {}
 ~A() {}
 void f() const {}
};

class B {
 int i;
public:
 B(int ii) : i(ii) {}
 ~B() {}
 virtual void f() const {}
};

class C : public B {
 A a;
public:
 C(int ii) : B(ii), a(ii) {}
 ~C() {} // Calls ~A() and ~B()
 void f() const { // Redefinition
 a.f();
 B::f();
 }
};
void bar(B b){
b.f();
}

int main() {
 C c(47);
} ///:~