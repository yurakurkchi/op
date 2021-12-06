#include <iomanip>
#include <ctime>
#include <iostream>
#include <math.h>


using namespace std;


const int Z = 10;
int M[Z], K[Z];


  void input(int[]);//введення масивів
  void output(int[]);//вивід
  int t(int[], int[]);//сума послідовності перемножених елементів з однаковими індексами,яка дорівнює t
  int min(int[]);
  int max(int[]);
  void remin(int[], int, int);
  void remax(int[], int, int);
  


  int main(){
srand(time(NULL));
cout << "Масиви:" << "\n\n";


input(M);
input(K);


cout << "M: "; 
output(M); 
cout << "\n\n";
cout << "K: "; 
output(K);


int T = t(M, K);
 cout << "\n\n"<< "обчислення суми добутку елементів з однаковим індексом " << "t= " << T << "\n\n";


remin(K, min(K), T);              
remax(M, max(M), T);


cout << "array M after operations on: ";
output(M);
cout << "\n\n";
cout << "array K after operations on: " ;
output(K);
cout << "\n\n";


return 0;
}



 void input(int masiv[]){

  for(int i = 0; i < Z; i++){
       masiv[i] = rand() % 17 - 8;
 }
}



void output (int masiv[]){

  for(int i = 0; i < Z; i++){
      cout << "   " << masiv[i];
  }
}



int t(int masiv1[],int masiv2[]){

  int sum = 0;

  for(int i = 0; i < Z; i++){
       sum = sum + (masiv1[i]) * (masiv2[i]);
  }
  return sum;
}



int min(int masiv[]){

int mini = masiv[0];

for(int i = 1; i <= Z; i++){
    if (mini >= masiv[i]){
        mini=masiv[i];
  }
}
return mini;
}



int max(int masiv[]){

int maxi = masiv[0];

for(int i = 0; i < Z; i++){
    if (maxi <= masiv[i]){
        maxi=masiv[i];
  }
}
return maxi;
}



void remin(int masiv[], int mi, int re){

for(int i = 0; i < Z; i++){
   if(masiv[i]==mi){
       masiv[i]=re;
   }
}



}



void remax(int masiv[], int ma, int re){

for(int i = 0; i < Z; i++){
    if(masiv[i]==ma){
       masiv[i] = re;
   }
}
}