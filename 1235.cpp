#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int N,i,j,k,l,m,n;
    char name[150],r_name[150],nm[150];
    scanf("%d",&N);
    for(i=0; i<=N; i++){
        gets(name);
        if(i==0){
            continue;
        }
        l=strlen(name);
        k=l/2;
        for(m=0,j=k-1; j>=0; j--){
            r_name[m]=name[j];
            m++;
        }
        for(j=l-1; j>=k; j--){
            r_name[m]=name[j];
            m++;
        }
        r_name[m]='\0';
        printf("%s\n",r_name);
        m=0;
    }
    return 0;
}