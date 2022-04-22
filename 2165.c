#include<stdio.h>
#include<string.h>

int main()
{
    int l;
    char str[501];
    gets(str);
    l=strlen(str);
    if(l<=140)printf("TWEET\n");
    else printf("MUTE\n");

    return 0;
}