#include <iostream>
#include <math.h>
#include <iomanip>

#define PI 3.14159
#define G 9.80665

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double h, alfa, v, Vox, Voy, Ts, H, Vfy, Td, Tt, D;
  int p1, p2, n;

  while(cin >> h){
    cin >> p1 >> p2;
    cin >> n;

    for(int i=0; i<n; i++){
      cin >> alfa >> v;

      alfa = alfa * PI / 180;
      Vox = v * cos(alfa);
      Voy = v * sin(alfa);

      Ts = Voy /  G;
      H = (Voy*Voy) / (2 *  G) + h;
      Vfy = sqrt(2 * G * H);
      Td = Vfy /  G; 
      Tt = Ts + Td;
      D = Vox * Tt;

      if(D > p1 && D < p2)
        cout << fixed << setprecision(5) << D << " -> DUCK" << endl;
      else
        cout << fixed << setprecision(5) << D << " -> NUCK" << endl;

    }
  }
  
}