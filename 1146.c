#include<stdio.h>

int main()

{

    int i,j,k;

    while(1){

        scanf("%d", &j);

        if(j == 0)break;

        printf("1");

        for(k = 2;k <= j;k++){

            printf(" %d",k);

        }

        printf("\n");

    }

    return 0;

}