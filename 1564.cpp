#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d" ,&a)!=EOF)
    {
        if(a==0)
            cout<<"vai ter copa!\n";
        else if(a>0)
            cout<<"vai ter duas!\n";
    }
    return 0;
}