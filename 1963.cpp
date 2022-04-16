#include <iostream>
 
using namespace std;

int main()
{
    double a,b,c;
    while(scanf("%lf",&a)!=EOF){
        scanf("%lf",&b);
        c = b - a;
        a = 100.00 / a;
        printf("%.2f%%\n",c*a);
    }


    return 0;
}