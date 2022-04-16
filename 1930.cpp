#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b,c,d,e;
    while(scanf("%d",&a)!=EOF)
    {
        scanf("%d %d %d",&b, &c, &d);
        e = a + b+ c+ d;
        printf("%d\n",e-3);
    }

    return 0;
}