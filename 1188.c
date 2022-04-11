#include <stdio.h>
 
int main()
{
    double a[12][12],sum=0.0;
    int i,j,x,y,z=1,b=11;
    char s[2];
    scanf("%s",&s);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&a[i][j]);
          }
       }
    for(x=11;x>=0;x--)
    {
        for(y=z;y<b;y++)
            sum+=a[x][y];
            z++;
            b--;
    }
    if(s[0]=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(s[0]=='M')
    {
        printf("%.1lf\n",sum/30.0);
    }
    return 0;
}