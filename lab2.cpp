#include <iostream>
#include <math.h>
 
using namespace std;

double x;
double y;

int main(){


cout << "введите х: ";
cin >> x;
cout << "введите y: ";
cin >> y;



if (y>x or y>-x) {
   if ((pow(x, 2) + pow(y, 2) <= 1 )){
    cout << "x,y принадлежат заданой области";
   } 
    else{
        cout << "x,y не принадлежат заданой области";
        }
}
else{
    cout << "x,y не принадлежат заданой области";
     }
return 0;
}