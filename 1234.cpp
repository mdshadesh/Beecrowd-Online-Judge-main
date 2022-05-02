#include <iostream>
#include<string.h>
 
using namespace std;
 
int main()
{
    char str[100];
    int i,j,l;
    while(gets(str) != NULL)
    {
        j = 0;
        l = strlen(str);
        for(i = 0;i < l;i++)
        {
            if(str[i] != ' ')
            {
                j++;
                if(str[i] > 96 && j%2 == 1)
                str[i] -= 32;
                else if(str[i] < 96 && j%2 == 0)
                str[i] += 32;
            }
        }
        str[l]='\0';
        printf("%s\n",str);
    }
    return 0;
}