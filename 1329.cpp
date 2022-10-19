#include<stdio.h>
int main()
{
    int b[10000],jo,j,n,i,m;

while(scanf("%d",&n)==1)
{
        m=0,jo=0;
       if(n==0)
       {
        break;
       }
   for(i=0;i<n;i++)
   {
        scanf("%d",&b[i]);
        }
   for(j=0;j<n;j++)
   {
        if(b[j]==0)
        {
            m++;
        }
        else
        {
            jo++;
        }
     }

    printf("Mary won %d times and John won %d times\n",m,jo);
  }
    return 0;
}

