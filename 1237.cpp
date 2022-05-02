#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void sub(char s[],char s1[],int l);
int main()
{

    char str[51],str1[51];
    int l,l1;
    while(gets(str)&&gets(str1)){
    l=strlen(str);
    l1=strlen(str1);
    if(l>=l1)sub(str,str1,l);
    else sub(str1,str,l1);
    }
    return 0;
}
void sub(char s[],char s1[], int l)
{
    int j,i,big,c,l1,m,n;
    l1=strlen(s1);
    big=0;
    for(j = 0;j < l1;j++){
        for(i = 0;i < l;i++){
            c=0;
            for(m=i,n=j;s1[n]==s[m];m++,n++){
                if(n==l1 || m==l)break;
                else c++;
            }
            if(c>big)big=c;
        }
    }

    printf("%d\n",big);

    return ;
}