#include<iostream>
#include<stdexcept>
using namespace std;

class Member{
public:
        string name;
        int jernumber;

class nest : public exception{
public:
        const char* message;
        nest(const char* error){
        message = error;
        }
};
Member(string _name, int _jernumber) throw(nest){
        name = _name;
        setnum(_jernumber);
}
void setnum(int _jernumber) throw(nest){
        if(_jernumber<=0){
        throw nest("Jersey number cannot be zero or a negative number ");
        }
jernumber=_jernumber;
}
string getName() const{
        return name;
}
int getnum() const{
        return jernumber;
        }
};

int main(){
        try{
        Member m("Marco Reus",11);
        std::cout<<"Name:"<<m.getName()<<", Jersey number: #"<<m.getnum()<<std::endl;
        }catch(Member::nest& ex){
        cout<<ex.message<<endl;
        }
        return 0;
}