#include <iostream>
 
using namespace std;

int main()
{
    int m,n,i,j,k,l,x;
    double d;
    int arr[6]={2,5,10,20,50,100};
    for(;;)
    {
        l=0;
        scanf("%d %d",&m ,&n);
        if(m==0 && n==0)
        break;
        x = n - m;
        if(x>100)x-=100;
        else if(x>50)
        x-=50;
        else if(x>20)
        x-=20;
        else if(x>10)
        x-=10;
        else if(x>5)
        x-=5;
        else if(x>=2)
        x-=2;
        for(i = 5;i >= 0;i--)
        {
            d=x-arr[i];
            if(d==0)
            {
                l=5;
            }
        }
        if(l==5)
        printf("possible\n");
        else 
        printf("impossible\n");


    }

    return 0;
}