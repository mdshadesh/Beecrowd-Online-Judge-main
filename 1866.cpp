#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&j);
        if(j%2==0)printf("0\n");
        else printf("1\n");
    }

    return 0;
}