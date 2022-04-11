/*
Read an integer N. This N will be the number of integer numbers X that will be read.
Print how many these numbers X are in the interval [10,20] and how many values are out of this interval.
*/
#include <iostream>

using namespace std;

int main(){
    int x, a;
    
    int in = 0;
    int out = 0;
    
    cin >> x;
    for(int i = 0; i < x; i++){
            cin >> a;
            if(a >= 10 && a <= 20) in++;
            else out++;
    }
    cout << in << " in\n";
    cout << out << " out\n";
    
    return 0;
}