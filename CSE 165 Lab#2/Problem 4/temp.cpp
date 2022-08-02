#include<iostream>
using namespace std;

char* copy(char* string){
int length=0, i;
while(string[length]!='\0'){
length++;
}
cout<<length;
char* copy_string = new char[length];

for( i=0; i<length; i++) copy_string[i]= string[i];
copy_string[i]='\0';
return copy_string;
}

int main(int argc, char* argv[]){
char* sentence = "My name is Erick, I am a CSE Major.";
char* duplicate = copy(sentence);
cout<<"Original sentence : " <<sentence <<endl;
cout<<"Duplicate sentence: " <<duplicate <<endl;
delete [] duplicate;
return 0;
}