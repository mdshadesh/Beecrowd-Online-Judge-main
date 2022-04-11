#include<stdio.h>

int main()

{

    int i,j,k;

    float N[100];

    for(i = 0;i < 100;i++){

        scanf("%f",&N[i]);

    }

    for(i = 0;i < 100;i++){

        if(N[i] <= 10)printf("A[%d] = %.1f\n",i,N[i]);

    }

    return 0;

}