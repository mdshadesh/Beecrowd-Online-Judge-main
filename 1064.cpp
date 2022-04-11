/* Read 6 values that can be floating point numbers. After,
 print how many of them were positive. In the next line, print the average of 
 all positive values typed, with one digit after the decimal point.
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    float num,sum=0;
    
    int i,count=0;
    for(i=1;i<=6;i++){
        cin >> num;
        if(num>0){
          sum = sum + num;
          count++;
        }
    }
    float average = sum/count;
    cout<<count<<" valores positivos"<<endl;
    cout<<fixed;
    cout<<setprecision(1)<<average<<endl;
    return 0;
}