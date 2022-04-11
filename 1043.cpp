/* Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, 
calculate the perimeter of the triangle and print the message:
Perimetro = XX.
If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:
Area = XX.X
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,ans;
    cin>>a>>b>>c;
    
    if(a<(b+c)&&b<(a+c)&&c<(a+b)){
        cout<<fixed;
        cout<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
    }else{
        ans=0.5*(a+b)*c;
        cout<<fixed;
        cout<<setprecision(1)<<"Area = "<<ans<<endl;
    }

return 0;
}
