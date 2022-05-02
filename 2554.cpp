#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,d,j,a=0,i,p=0,k;
    string s,aux = "Pizza antes de FdI";

    while(cin>>n>>d){

        for(i=0;i<d;i++){
            cin>>s;
            a=0;
            for(j=0;j<n;j++){
                cin>>p;
                if(p==0){
                    a=1;
                }
            }
            if(a==0 && k == 0){
                aux=s;
                k=1;
            }
        }
        cout<<aux<<endl;
        aux = "Pizza antes de FdI";
        k=0;

    }
    
    return 0;
}