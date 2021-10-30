#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    float res = 0, x;
    int n, et;
    int i = 0;

    cout << "enter n:" << endl;
    cin >> n;
    cout << "enter precision:" << endl;
    cin >> et;
    cout << "enter x:" << endl;
    cin >> x;
     
    while (i <= n) {
        res = res + pow(-1, i) *pow(x, 2*i+1) / (2*i+1);
         i++;
    }

    cout << fixed << setprecision(et)<< res;

    return 0;
}