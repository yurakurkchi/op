#include <iostream>
 
using namespace std;
 
int a, b, p, n, i;
int main(){

b= random()  ;
a= random()  ;

 n=b-a;
 
if (n >= 0)
{
     cout << "p: " ;
    for (i=0; i<=n; i++)
     {
    cout << a+i << ", ";
    }
}
else{
cout << "Error! a is bigger than b!";
}
return 0;
}