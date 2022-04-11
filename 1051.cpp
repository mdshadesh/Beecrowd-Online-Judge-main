/*
In an imaginary country called Lisarb, all the people are very happy to pay their taxes 
because they know that doesn’t exist corrupt politicians and the taxes are used to 
 the population, without any misappropriation. The currency of this country is Rombus, 
 whose symbol is R$.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double sal;
    
    cin >> sal;
    
    if(sal <= 2000.00){
           cout << "Isento\n";
    }else if (sal >= 2000.01 && sal <= 3000.00){
          printf("R$ %.2f\n", (sal - 2000.00)*0.08);
    }else if (sal >= 3000.01 && sal <= 4500.00){
          printf("R$ %.2f\n", ((sal - 3000.00)*0.18 + 1000.00*0.08));
    }else if (sal >= 4500.01){
          printf("R$ %.2f\n", ((sal - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }
    return 0;
}