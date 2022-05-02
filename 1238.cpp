#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int i,j,n,l1,l2,l;
    char str1[52],str2[52];
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%s %s",str1,str2);
        l1 = strlen(str1);
        l2 = strlen(str2);
        if(l1 >= l2)l = l1;
        else l = l2;
        for(j = 0;j < l;j++){
            if(j < l1)printf("%c",str1[j]);
            if(j < l2)printf("%c",str2[j]);
        }
        printf("\n");
    }


    return 0;
}
