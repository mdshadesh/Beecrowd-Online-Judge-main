#include <iostream>
 
using namespace std;

int main()
{

    int a,b,c;
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        if(a > b)c = a;
        else if(a < b)c = b;
        else c = a;
        printf("%d\n",c);
    }

    return 0;
}