#include <iostream>
using namespace std;

//structure to hold data and address of next structure
struct Node {
int data;
struct Node *next;
};

//function to make list of number provided in argument
void makeLL(struct Node *head, int number){
int i;
struct Node *temp = head;

//iterate number's time loop
for(i = 1;i<=number;i++){

//create a new node
Node *node = new Node();
node->next = NULL;
node->data = i;

//check if head is empty means first node or not
if(i == 1){
head->data = i;
}else{

while(temp->next != NULL){
temp = temp->next;
}

temp->next = node;
        }
    }
}

void display(struct Node *head){
struct Node *temp = head;

while(temp != NULL){
cout<<temp<<"\t"<<temp->data<<endl;
temp = temp->next;
    }
}
int main() {
Node* head = new Node();
makeLL (head, 5);
cout<<"Address"<<"\t\t"<<"Data"<<endl;
display(head);
}