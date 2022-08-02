#include<iostream>
using namespace std;

typedef struct Player {
 string name;
 string position;
 int id;
} Player;
int main(){
 //initializing the struct
 Player s1 = {"Toni Kroos","CM",8};

 //printing the data without pointer
 cout<<"Name: "<<s1.name<<endl;
 cout<<"Position: "<<s1.position<<endl;
 cout<<"ID: "<<s1.id<<endl;
 Player *ptr = &s1;
 
 //chaning the data
 ptr->name="Marco Reus";
 ptr->position="CAM";
 ptr->id=11;
 cout<<endl<<endl;

 //printing data with pointer
 cout<<"Name: "<<ptr->name<<endl;
 cout<<"Position: "<<ptr->position<<endl;
 cout<<"ID: "<<ptr->id<<endl;
}