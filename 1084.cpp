#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
int main(){
    int N,D;
    while ( cin >> N >> D && !(N == 0 && D == N)){
            string c;
            cin >> c;
            string b;
            int count =0;
            int size=0;
            for ( auto l = c.begin(); l !=c.end(); l++ ){
//              cout << *l;
                if (b.empty()){
                    b.push_back(*l);
                    size++;
                }else {
                    while(!b.empty()){
                    if(count >=D){
                        break;
                    }
                        if ( b.back() < *l){ 
                            count++;
                            size--;
                            b.pop_back();                           
                        }else{
                            break;
                        }
                    }
                    if(N-D >size){
                    size++;
                        b.push_back(*l);
                    }
                }
            }
            cout << b << endl;
    }
    return 0;
}