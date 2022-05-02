#include <iostream>
#include<string.h>
 
using namespace std;
 
int main()
{
    int i,n,l,j,led;
    char num[102];
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        led = 0;
        scanf("%s",&num);
        l = strlen(num);
        for(j = 0;j < l;j++)
        {
            if(num[j] == '1')
            led += 2;
            else if(num[j] == '2' || num[j] == '3' || num[j] == '5')
            led += 5;
            else if(num[j] == '0' || num[j] == '9' || num[j] == '6')
            led += 6;
            else if(num[j] == '4')
            led += 4;
            else if(num[j] == '7')
            led += 3;
            else if(num[j] == '8')
            led += 7;
        }
        printf("%d leds\n",led);
    }
    return 0;
}