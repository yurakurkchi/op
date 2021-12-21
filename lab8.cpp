#include <iomanip>
#include <ctime>
#include <iostream>
#include <math.h>

using namespace std;


int n;
double  absmaxM,
        absmaxN,
        absmaxB,
        mulM ,
        mulN ,
        mulB ;



int main(){
srand(time(NULL));

cout << "Введіть розмірність квадратних матриць: "; cin >>  n; cout << "\n\n";


double  **M = new double *[n];
for(int i = 0; i < n; i++) { 

  M[i] = new double [n];
}
for(int i = 0; i < n; i++) {

    for(int j = 0; j < n; j++) {

   M[i][j] = double(rand() %10000 * -0.001);
    }
}


double  **N = new double *[ n ];
for(int i = 0; i < n; i++) { 

  N[i] = new double [n];
}
for(int i = 0; i < n; i++) {

    for(int j = 0; j < n; j++) {

   N[i][j] = double(rand() %10000 * -0.001);
    }
}


double  **B = new double *[ n ];
for(int i = 0; i < n; i++) { 

  B[i] = new double [n];
}
for(int i = 0; i < n; i++) {

    for(int j = 0; j < n; j++) {

   B[i][j] = double(rand() %10000 * -0.001);
    }
}



cout << "Матриці: " << "\n\n";


cout << "M: " << "\n";
for(int i = 0; i < n; i++) {

    for(int j = 0; j < n; j++) {

   cout << M[i][j] << setw(10);
    }
cout << "\n\n" ;
}


cout << "\n\n"<< "N:" << "\n";
for(int i = 0; i < n; i++) {

    for(int j = 0; j < n; j++) {

   cout << N[i][j] << setw(10);
    }
cout << "\n\n";
}


cout << "\n\n"<< "B:" << "\n";
for(int i = 0; i < n; i++) {

    for(int j = 0; j < n; j++) {

   cout << B[i][j] << setw(10);
    }
cout << "\n\n";
}
cout << "\n\n";

       

for(int i = 0; i < n; i++) { 

    double  absmaxM = 0;
    double  absmaxN = 0;
    double  absmaxB = 0;

        for(int j = 0; j < n; j++) { 
        if(absmaxM <= abs(M[i][j])){
         absmaxM = abs(M[i][j]);
         }
        if(absmaxN <= abs(N[i][j])){
         absmaxN = abs(N[i][j]);
         }
        if(abs(absmaxB) <= abs(B[i][j])){
         absmaxB = abs(B[i][j]);
        }
        }


mulM += absmaxM;
mulN += absmaxN;
mulB += absmaxB;


if(i == 0){
cout << "мод.макс.ел. M:    мод.макс.ел. N:     мод.макс.ел. B:   " << "\n";}
cout << absmaxM << setw(19) << absmaxN << setw(20) << absmaxB << "\n";


if(i == n - 1){
    cout << "\n\n";
cout << "сум.макс.ел.рядків М: " << (-1 * mulM)<< "\n";
 cout << "сум.макс.ел.рядків N: " << (-1 * mulN) << "\n";
  cout << "сум.макс.ел.рядків B: " << (-1 * mulB) << "\n\n\n" << "Ми визначили,що матриця з найменшою сумою найбільших за модулем елементів рядків є ";}
   

if(i == n - 1){

       double  min=(-1 * mulM);

if((-1 * mulN) < (-1 * mulM) && (-1 * mulN) < (-1 * mulB)){
    cout << "N, ось ця матриця із зміненами які потребувалися: "<< "\n";
        for(int i = 0; i < n; i++) {

            for(int j = 0; j < n; j++) {

                if(i == j){
                 N[i][j] = (-1 * mulN);
                }
                cout << N[i][j] << setw(10);
        }
        cout << "\n\n";
    }   
}

if((-1 * mulB) < (-1 * mulM) && (-1 * mulB) < (-1 * mulN)){
    cout << "B, ось ця матриця із зміненами які потребувалися: "<< "\n";
      for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(i == j){
             B[i][j] = (-1 * mulB);
            }
            cout << B[i][j] << setw(10);
        }
        cout << "\n\n";
    }
}

if((-1 * mulM) < (-1 * mulB) && (-1 * mulM) < (-1 * mulN)){
    cout << "M , ось ця матриця із зміненами які потребувалися: "<< "\n";
        for(int i = 0; i < n; i++) {

         for(int j = 0; j < n; j++) {

            if(i == j){
            
             M[i][j] = (-1 * mulM);
            }
            cout << M[i][j] << setw(10);
        }
        cout << "\n\n";
    }
 }
cout << "\n\n";
}
}






for(int i = 0; i < n; i++) {

delete[] M[i];
}
delete[] M;
for(int i = 0; i < n; i++) {

delete[] N[i];
}
delete[] N;
for(int i = 0; i < n; i++) {

delete[] B[i];
}
delete[] B;


return 0;
}