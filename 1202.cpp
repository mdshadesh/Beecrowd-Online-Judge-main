#include <bits/stdc++.h>
using namespace std;

#define mod 1500
int fb[2000];
int fibo(int x){
    return fb[x];
}
int exp(int x,int y){
    int p = 1;
    while(y!=0){
        if(y%2==1){
        p = (p*x)%mod;
        y--;
    }
     x =  (x*x)%mod;
     y/=2;
    }
    return p ;
}

int main() {
    int n,i,j,k,l,m,d;
    string s1;
    fb[1] = fb[2] = 1;
    for(i=3;i<1510;i++)
    fb[i] = (fb[i-1]+fb[i-2])%1000;
    cin >> n ;
    while(n--){
        cin >> s1;
        d = l = 0;
        for(i = s1.size()-1;i>=0 ;i--){
            if(s1[i] == '1')
            d =(d+exp(2,l))%mod;
            l++;
        }
        d = fibo(d);

        if(d<10) cout <<"00"<<d<<endl;
        else if(d>=10 && d<100) cout <<"0"<<d<<endl;
        else cout <<d<<endl;
    }
    return 0;
}