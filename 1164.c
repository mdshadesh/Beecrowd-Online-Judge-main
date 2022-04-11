#include<stdio.h>

int main()
{
    int n, i, j, l,k = 0;
    scanf("%d", &n);

    for(i = 0;i < n;i++){
        scanf("%d", &j);
        for(l = 1;l < j;l++){

            if(j%l == 0)k += l;

        }
        if(k == j)printf("%d eh perfeito\n", j);
        else printf("%d nao eh perfeito\n", j);

        k = 0;
    }
    return 0;

}