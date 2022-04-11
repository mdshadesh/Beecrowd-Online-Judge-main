#include<stdio.h>

int main()
{
    int i, j = 0;
    float n, a, b, avg, ar[2];
    for (i = 0;i < 100;i++){
        scanf("%f", &n);
    if (n >= 0 && n <= 10){
        ar[j] = n;
        j++;
    }
    else printf("nota invalida\n");
    if (j > 1) break;
    }
    avg = (ar[0] + ar[1]) / 2;
    printf("media = %.2f\n", avg);

    return 0;
}