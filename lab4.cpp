#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

    double res = 0;
    int n;

    cout << "enter n:";
    cin >> n;

   for(double i = 1; i <= n; i++) {

       res = res + ( 1 / (i * (i + 2)));
      }

       cout << fixed << setprecision(5) << res;

    return 0;
 }
