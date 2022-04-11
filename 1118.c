//  Several Scores with Validation .. 

#include<stdio.h>
int main()
{
    float n,s,p,k;
    s = p = k = 0;
    while(1)
    {
        scanf("%f",&n);
        if(n < 0.0 || n > 10.0)
            printf("nota invalida\n");
        else
        {
            s += n;
            p++;
            if(p==2)
            {
                s/=2;
                printf("media = %.2lf\n",s);
                printf("novo calculo (1-sim 2-nao)\n");
                while(1)
                {
                    scanf("%f",&n);
                    if((int)n==1)
                    {
                        s = p = 0;
                        k=1;
                        break;
                    }
                    else if((int)n==2)
                        return 0;
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }
    }
    return 0;
}