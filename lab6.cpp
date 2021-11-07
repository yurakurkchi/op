#include <iostream>
#include <math.h>

using namespace std;
 
float a, b, c;
float t, s;
float L;
float funct(float, float, float);

void init();
void solution();
void browse();

 int main(){
     cout <<" \n" <<"обчіслення L:\n" << "=============" << endl;

    init();

    solution();

    browse();

 }
 float f(float a, float b, float c){
     return ((2 * a - b - (sin(c))) / (5 + abs(c)));
 }
 void init(){
     cout << "введіть t: "; cin >> t;
     cout << "введіть s: "; cin >> s;
 }
void solution(){
    L= f(t, -2 * s, 1.17) + f(2.2, t, s-t);
}
void browse(){
    cout << "L= " << L;
}
 