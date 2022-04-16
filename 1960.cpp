#include <iostream>
 
using namespace std;
 
#include<stdio.h>

void Onedigit(int a);
void Twodigit(int b);
void Threedigit(int c);

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n<10)Onedigit(n);
        else if(n<100)Twodigit(n);
        else Threedigit(n);
        printf("\n");
    }

    return 0;
}

void Onedigit(int a)
{
    if(a == 1)printf("I");
    else if(a == 2)printf("II");
    else if(a == 3)printf("III");
    else if(a == 4)printf("IV");
    else if(a == 5)printf("V");
    else if(a == 6)printf("VI");
    else if(a == 7)printf("VII");
    else if(a == 8)printf("VIII");
    else if(a == 9)printf("IX");
}

void Twodigit(int b)
{
    int d = b / 10;

    b = b - (d*10);

    if(d == 1)printf("X");
    else if(d == 2)printf("XX");
    else if(d == 3)printf("XXX");
    else if(d == 4)printf("XL");
    else if(d == 5)printf("L");
    else if(d == 6)printf("LX");
    else if(d == 7)printf("LXX");
    else if(d == 8)printf("LXXX");
    else if(d == 9)printf("XC");

    Onedigit(b);

}

void Threedigit(int c)
{
    int d = c / 100;

    c = c - (d*100);

    if(d == 1)printf("C");
    else if(d == 2)printf("CC");
    else if(d == 3)printf("CCC");
    else if(d == 4)printf("CD");
    else if(d == 5)printf("D");
    else if(d == 6)printf("DC");
    else if(d == 7)printf("DCC");
    else if(d == 8)printf("DCCC");
    else if(d == 9)printf("CM");

    Twodigit(c);

}