
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
      int a,b,c,i,j,temp,temp1,tcase;
      while(scanf("%d",&tcase)==1){
      for(i=1;i<=tcase;i++){
      scanf("%d %d",&a,&b);
            if(a<b){
                  temp1=a;
                  a=b;
                  b=temp1;
            }
                  while(a%b!=0){
                        temp=a;
                        a=b;
                        b=temp%b;
                  }
         printf("%d\n",b);
                  temp=0;
            }
      }
      return 0;
}