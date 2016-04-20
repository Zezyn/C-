#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string Da[6][6];

          
    for(int i=0;i<6;i++) { //Put in input
        Da[0][i] = "Empty";
        Da[i][0] = "Empty";
    }
                                  
    for(int i=0;i<6;i++) { //Print
        cout << "1 " << Da[0][i] << endl;
        cout << "2 " << Da[i][0] << endl;
    }                                                      
    return 0;
}
