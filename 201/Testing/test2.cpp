
#include <iostream>
#include <cstring>

using namespace std;

//Declare functions here
void decrypt(char message[]);

//Declare global variables here

int main() {

    char message[] = ":mmZ\\dxZmx]Zpgy";
    decrypt(message);
    return 0;
}

//Insert user defined functions here
//This is the decrypter
void decrypt(char message[]){
  char decrypt[strlen(message)];
  for(int i=0; i<100; i++){
    for(int j = 0; j < strlen(message); j++){
      if(message[j] + i > 126){
        decrypt[j] = 32 + ((message[j] + i) - 127);
      }
      else{
        decrypt[j] = (message[j] + i);
      }
    }
    cout << "Cycle " << i << ":  " << decrypt << endl;
  }
}
