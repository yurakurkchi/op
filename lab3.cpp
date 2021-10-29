#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    float res = 0, x;
    int n, et;

    cout << "enter n:" << endl;
    cin >> n;
    cout << "enter precision:" << endl;
    cin >> et;
    cout << "enter x:" << endl;
    cin >> x;
     
    for (int i = 0; i <= n; i++) {
        res = res + pow(-1, i) *pow(x, 2*i+1) / (2*i+1);
    }

    cout << fixed << setprecision(et)<< res;

    return 0;
}