/* 
Read the start time and end time of a game, in hours and minutes (initial hour, 
initial minute, final hour, final minute). Then print the duration of the game, 
 that the game can begin in a day and finish in another day,

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    int dif;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    dif = ((b*60)+d) - ((a*60)+c);
    if(dif<=0) dif += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
    return 0;
}
