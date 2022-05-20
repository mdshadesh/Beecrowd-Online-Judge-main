#include <iostream>
#include <stdio.h>
 
using namespace std;

int main()
{
   int n,a=1,b=0,temp,i,len;
   scanf("%d",&n);
   int array[n];
   
   for(i=0;i<n;i++)
   {
    array[i]=a;
    temp=a+b;
    b=a;
    a=temp;
   }
   for(i=n-1;i>=0;i--)
   {
        if(i==0)
        {
          printf("%d",array[i]);
        }else
        {
          printf("%d ",array[i]);
        }
   }
   printf("\n");
}
