/* Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, 
so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, 
based on the following cases always writing an appropriate message:
if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c;

    cin >> a >> b >> c;

    if(a >= (b+c) || b >= (a+c) || c >= (a+b))
         cout << "NAO FORMA TRIANGULO"<<endl;
    else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
           cout << "TRIANGULO RETANGULO"<<endl;
    else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
           cout << "TRIANGULO OBTUSANGULO"<<endl;
    else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
           cout << "TRIANGULO ACUTANGULO"<<endl;
    if(a == b && a == c)
            cout << "TRIANGULO EQUILATERO"<<endl;
    if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
            cout << "TRIANGULO ISOSCELES"<<endl;

return 0;
    
}