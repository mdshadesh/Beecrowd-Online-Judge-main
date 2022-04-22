#include <iostream>
 
using namespace std;
 
int main()
{
    int n, i, cndtn = 1;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);
    if(n==2 && ara[0]==ara[1]) 
    cndtn = 0;
    else
    {
        for(i=2; i<n; i++)
        {
            if(ara[i] >= ara[i-1] && ara[i-1] >= ara[i-2])
            {
                cndtn = 0;
                break;
            }
            else if(ara[i] <= ara[i-1] && ara[i-1] <= ara[i-2])
            {
                cndtn = 0;
                break;
            }
        }
    }
    printf((cndtn==1)?"1\n":"0\n");
    return 0;
}