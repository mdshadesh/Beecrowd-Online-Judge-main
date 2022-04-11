// even between five number

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int i,num,count=0;
    for(i=1;i<=5;i++){
        cin >> num;
        if(num%2==0){
          count++;
        }
    }
    cout<<count<<" valores pares"<<endl;
    return 0;
}