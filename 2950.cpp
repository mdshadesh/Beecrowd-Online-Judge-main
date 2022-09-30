#include <iostream>
 
using namespace std;
 
#include <stdio.h>

int main()
{
    float N;
    float X;
    float Y;

    scanf("%f %f %f", &N, &X, &Y);

    printf("%.2f\n", N/(X+Y));

    return 0;
}