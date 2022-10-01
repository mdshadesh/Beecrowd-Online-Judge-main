
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    double x;
    x = b / (a + 2.0);
    cout << fixed << setprecision(2) << x << endl;
    
    return 0;
}