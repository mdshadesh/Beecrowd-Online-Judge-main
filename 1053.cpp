#include <iostream>
 
using namespace std;
 
int main()
{
    long long int a,b,c,d,e,f,g,h;
    scanf("%lld", &d);
    for(e=1; e<=d; e++)
    {
        scanf("%lld%lld%lld", &a, &b, &c);
        if(a>b && a>c)
        {
            f=a*a;
            g=b*b+c*c;
        }
        else if(b>a && b>c)
        {
            f=b*b;
            g=a*a+c*c;
        }
        else if(c>a && c>b)
        {
            f=c*c;
            g=a*a+b*b;
        }
        if(f==g)
            printf("Case %d: yes\n",e);
        else
            printf("Case %d: no\n",e);
    }
    return 0;
}
