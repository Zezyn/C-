/*
    Filename: project_8_11.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/12/2015
    Description: Your country is at war and your enemies are using a secret code to communicate with each other.
    You have managed to intercept a message that reads as follows:

    :mmZ\dxZmx]Zpgy

    The message is obviously encrypted using the enemy’s secret code. You have just learned that their encryption 
    method is based upon the ASCII code. Appendix 3 shows the ASCII character set (also at the end of this file). 
    Individual characters in a string are encoded using this system. FOr example, the letter “A” is encoded using 
    the number 65 and “B” is encoded using the number 66.

    Your enemy’s secret code takes each letter of the message and encrypts it as follows:

    If (OriginalChar + Key > 126) then
        EncryptedCHAR = 32 + ((OriginalChar + Key) - 127)
    Else
        EncryptedChar = (OriginalChar + Key)

    For example, if the enemy uses Key = 10 then the message “Hey” would be encrypted as:


    Character
    ASCII code
    H
    72
    e
    101
    y
    121

    Encrypted H = (72 + 10) = 82 = R in ASCII

    Encrypted e = (101 + 10) = 11 = o in ASCII

    Encrypted y = 32 + ((121 + 10) - 127) = 36 = $ in ASCII

    Consequently, “Hey” would be transmitted as “Ro$.”

    Write a program that decrypts the intercepted message. The ASCII codes for the unencrypted message are limited 
    to the visible ASCII characters. You only know that the key used is a number between 1 and 100. Your program 
    should try to decode the message using all possible keys between 1 and 100. When you try the valid key, the 
    message will make sense. For all other keys, the message will appear as gibberish.

*/

#include <iostream>
#include <cstring>

using namespace std;

//Declare functions here
void decrypt(char message[]);

//Declare global variables here
const int keys = 100;

int main() {

    //char message[keys] = ":mmZ\\dxZmx]Zpgy";
    char message[keys] = "Hey";
    decrypt(message);

    return 0;
}

//Insert user defined functions here
void decrypt(char message[]) {
    int encrypted[keys];
    char encryptedmessage[keys];
    int messageint[strlen(message)];
    
    for(int eachchar = 0; eachchar < strlen(message); eachchar++) {
        messageint[eachchar] = (int)message[eachchar];
        cout << "MESSAGEINT: " << messageint[eachchar] << endl; //Each char as int
        for(int i=0; i<keys; i++) {
            if((messageint[i] + eachchar) > 126) {
            	encrypted[i] = (messageint[i] + eachchar); 
            }
            else { encrypted[i] = (32 + (messageint[i] + eachchar) - 127); }
            cout << (char)encrypted[i];  
        }
    }
    cout << "Looking for answers 82, 11, 36." << endl;
}




/*
    char decrypted[keys];
    for(int i = 1; i<keys; i++) {
        for(int j=0; j<decrypted[j]; j++) {
            if(message[j] + i > 126) {
                decrypted[j] = (32 - message[j] - i + 127);
            }
            else { decrypted[j] = message[j] - i; }
        cout << decrypted[j];
        //cout << "Decrypted: " << decrypted[j];
        //cout << "Message: " << message[j];
        }
    }*/

