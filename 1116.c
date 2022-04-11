#include <stdio.h>
int main()
{
    int a,b,c,d;
    double e;
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        scanf("%d%d", &c, &d);
        if(d==0)
            printf("divisao impossivel\n");
        else
        {
            e=c/(d*1.00);
            printf("%.1lf\n", e);
        }
    }
    return 0;
}
