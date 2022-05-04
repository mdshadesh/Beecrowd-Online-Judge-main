#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n;
    while(1){
    cin >> n;
    n=pow(2, n-1);
    cout << n << endl;}
    return 0;
}