/* Read the start time and end time of a game, in hours. Then calculate the duration of the game, 
knowing that the game can begin in a day and finish in another day, with a maximum duration of 24
 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME 
 LASTED X HOUR(S)”
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,time=0;
    cin>>a>>b;

    if(a<b){
        time=b-a;
        cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }else if(a>b){
        time=24-(a-b) ;
        cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }else if(a==b){
        time=24;
        cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }
return 0;
}