#include <iostream>
 
using namespace std;

int  main()
{
    int p,n,a,checker,i;

    while(scanf("%d %d",&p,&n)!=EOF)//first line of input
    {
        int ar[n];
        checker = 0;
        for(i = 0;i < n;i++)
            scanf("%d",&ar[i]);//second line of input
        for(i = 0;i < n-1;i++){
            a = ar[i+1]-ar[i];
            if(a<0)a *= -1;//if the difference is negative
            if(a>p){
                checker = 5;
                break;
            }
        }
        if(checker==5)printf("GAME OVER\n");
        else printf("YOU WIN\n");
    }

    return 0;
}