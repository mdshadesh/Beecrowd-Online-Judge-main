#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double sum=0,s=0,x,su=0;
    int n,i,inteira, real,a[1000];
    while((scanf("%d",&n)) && n)
    {
         
        sum=0;
        for(i=0; i<n ; i++)
        {
            scanf("%d.%d", &inteira, &real);
            a[i] = inteira *100 + real;
            sum+=a[i];
        }
        x=((double)sum)/n;
        s=0;
        su=0;
        for(i=0 ; i<n ; i++)
        {
            if(a[i]<x)
            {
                s+=(int)(x-a[i])/100.0;
            }
            else
            {
                su+=(int)(a[i]-x)/100.0;
            }
        }
        if(s>su)
        {
            printf("$%.2lf\n",s);
        }
        else printf("$%.2lf\n",su);
    }
    return 0;
}
