/* Read an integer value N. After, read these N values and print a message 
for each value saying if this value is odd, even, positive or negative. In case 
of zero (0), although the correct description would be "EVEN NULL", because by 
definition zero is even, your program must print only "NULL", without quotes.
*/

#include <iostream>

using namespace std;

int main(){
    int x, a;
    
    cin >> x;
    for(int i = 0; i < x; i++){
            cin >> a;
            if(a == 0){
                 cout << "NULL\n";
            }
            else{
            if(a%2 == 0) cout << "EVEN";
            else cout << "ODD";
            
            if(a<0) cout << " NEGATIVE\n";
            else cout << " POSITIVE\n";
            }
    }
    
    return 0;
}