#include<iostream>
using namespace std;
int main(){
int a=0,b=0;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout << "p=";
for(int i=a;i<=b;i++){
 
int cnt=0;
    for(int j=2; j<=i/2; ++j){
        if(i%j==0)
           cnt++;}
      if(!cnt)
         cout<<i<<", ";
   }
   return 0;
}
