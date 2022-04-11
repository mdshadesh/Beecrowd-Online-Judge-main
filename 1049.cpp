/*
In this problem, your job is to read three Portuguese words. 
These words define an animal according to the table below, from left to right. 
, print the chosen animal defined by these three words.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
 string c;

 cin >> c;

 if(c == "vertebrado"){
  
  cin >> c;
  if(c == "ave"){

   cin >> c;
   if(c == "carnivoro"){
    cout << "aguia" << endl;
   }else{
    cout << "pomba" << endl;
   }
  }else{

   cin >> c;
   if(c == "onivoro"){
    cout << "homem" << endl;
   }else{
    cout << "vaca" << endl;
   }
  }
 }else{

  cin >> c;
  if(c == "inseto"){

   cin >> c;
   if(c == "hematofago"){
    cout << "pulga" << endl;
   }else{
    cout << "lagarta" << endl;
   }
  }else{

   cin >> c;
   if(c == "hematofago"){
    cout << "sanguessuga" << endl; 
   }else{
    cout << "minhoca" << endl;
   }
  }
 }
 return 0;
}
