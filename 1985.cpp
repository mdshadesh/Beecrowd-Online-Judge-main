#include <iostream>
 
using namespace std;

int main()
{
    int tst;
    double price;
    double amount = 0.00;
    int code, quantity;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d %d", &code, &quantity);
        if(code==1001)
            amount += (double) quantity*1.50;
        else if(code==1002)
                amount += (double) quantity*2.50;
        else if(code==1003)
                amount += (double) quantity*3.50;
        else if(code==1004)
                amount += (double) quantity*4.50;
        else if(code==1005)
                amount += (double) quantity*5.50;
    }
    printf("%.2lf\n", amount);
    return 0;
}