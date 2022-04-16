#include <iostream>
 
using namespace std;
 

int main()
{
    long long int n;
    int i,j,k;
    while(scanf("%lld",&n)!=EOF){
        while(n){
            i = n % 10;
            n = n / 10;
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}