#include<iostream>

using namespace std;

int main(){

int a=0,b=0;

cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;

cout << "p=";

for(int p=a;p<=b;p++){
 
int cnt=0;
    for(int i=2; i<=p/2; ++i){
        if(p%i==0)
           cnt++;}
      if(!cnt)
         cout<<p<<", ";
   }
   return 0;
}
