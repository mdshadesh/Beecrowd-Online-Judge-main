
//Read two integer values X and Y. Print the sum of all odd values between them.

#include <bits/stdc++.h>
using namespace std;

int main()
{
 int x, y, sum = 0, i;
 int min, max;

 cin>>x>>y;

 if(x < y){
  min = x;
  max = y;
 }else{
  max = x;
  min = y;
 }

 for(i = (min + 1); i < max; ++i)
 {
  if(i % 2 != 0){
   sum += i;
  }
 }

cout<<sum<<endl;

 return 0;
}