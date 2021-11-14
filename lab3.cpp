#include <iostream>
#include <cmath>
using namespace std;

 long double res=1, x,sum=0;
    int n=1, et;

int main() {
   
    cout << "enter precision:" ;
    cin >> et;
    cout << "enter x:" ;
    cin >> x;

     double e = 1/(pow(10 ,et));

  if(abs(x)<1){

while (abs(res) >= e){
  res = pow(-1, n) * pow(x, 2*n+1) / (2*n+1);
  n++;
  sum += res;
  
}
 cout << "\n" << sum ;
 }
else {
cout << "|x|>1,це не задовільняє умову";
}

    return 0;
}