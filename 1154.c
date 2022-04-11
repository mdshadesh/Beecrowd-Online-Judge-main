#include<stdio.h>

int main()
{
    int i = 0, j;
    float b,a = 0;

    while(1){
        scanf("%d", &j);
        if(j < 0)break;

        i = i + j;
        a++;
    }
    b = i/a;
    printf("%.2f\n", b);

    return 0;

}