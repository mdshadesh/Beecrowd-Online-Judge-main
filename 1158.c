#include<stdio.h>

int main()
{
    int n,i = 1, j, k = 0, X, Y;
    scanf("%d", &n);

    for(i = 0;i < n;i++)
    {
        scanf("%d %d", &X, &Y);
        if(X%2==0)X++;

        for(j = 0;j < Y;j++)
        {
            k += X;
            X += 2;;
        }
        printf("%d\n",k);
        k=0;
    }

    return 0;

}