#include <iostream>
using namespace std;
int main()
{
    int a,b,c,max=0;
    while(scanf("%d",&a)!=EOF)
    {
        for(b=1,max=0; b<=a; b++)
        {
            scanf("%d", &c);
            if(c>max)
                max=c;
        }
        if(max<10)
            cout<<"1\n";
        else if(max<20)
            cout<<"2\n";
        else
            cout<<"3\n";
    }
    return 0;
}