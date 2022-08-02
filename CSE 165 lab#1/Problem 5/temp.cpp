#include <iostream>
#include <string>
using namespace std;


bool quit = false;  
char response[100];  
int i, total, smallWd, let_a, code;

int main() {
    
while(quit == false) {
    cout << "Please type word: ";
    cin >> response;
       
while(response[i] != '\0'){
              total++;
              i++;
         }
      
      if (total <= 3){
          cout << "This word is too small. "<< endl;
          smallWd++;
          continue;
          }
      if (total == 4){
              cout << "This word has 4 letters. "<< endl;
              continue;
      }
      if(total >= 5 || total <= 8){
          
          for(int j = 0; j<= total; j++)
              if(response[j] == 'a'){
                  let_a++;
              }
          
          if (let_a == 0)
              code = 0;
          else if (let_a == 1)
              code = 1;
          else if (let_a == 2)
              code = 2;
          else if (let_a == 3)
              code = 3;
          else
              code = 4;  
          
          switch(let_a) {
                case 0 : cout << "Word does not have any a. " << endl;
                  let_a = 0;
                          continue;
                case 1 : cout << "Word has 1 a's. " << endl;
                  let_a = 0;
                          break;
                case 2 : cout << "Word has 2 a's. " << endl;
                  let_a = 0;
                          break;
                case 3 : cout << "Word has 3 a's. " << endl;
                  let_a = 0;
                          break;
              case 4 : cout<< "Too many a's." << endl;
                  let_a = 0;
                         break;
                  
              default: continue;
          }
      }
      if(total > 8){
          cout<< "Got to go... " << endl;
          break;
    }
  }
} 