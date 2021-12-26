#include <iomanip>
#include <ctime>
#include <iostream>
#include <math.h>


using namespace std;


double **creat(int);
void input(double**, int);
void output(double**, int);
void posit(double**, int);
void negat(double**, int);
void reset(double**, int);
void Delete(double**, int);


double** A;
double first_el;
double last_el;
int n, fi , fj, li, lj;
 


int main() {

srand(time(NULL));

    cout << "\n\nSet the dimension of the matrix A(n x n)\n" << "n: ";
    cin >> n; 
    cout << "\n";


    double **A = creat(n);


    input(A, n);

    
    cout << "\nМатриця А: \n";

    output(A, n);

    posit(A, n);

    negat(A, n);

    reset(A, n);

    cout << "Змінена матриця А: ";

    output(A, n);

    Delete(A, n);

    return 0;
}



double **creat(int n){

    double** matrix = new double *[n];
    for (int i = 0; i < n; ++i) {

     matrix [i] = new double [n];
    }
    return matrix;
}


void input(double** matrix, int n){

    double k = 0.5;
for (int i = 0; i < n; i++) { 

       for (int j = 0; j < n; j++){ 

            matrix[i][j] = (pow(-1,rand() % 2)) * (i % 2 ? (i + 1) * n - j - 0.5 : k);
            k++;
        }
    }
}


void output(double **matrix, int n){

    for (int i = 0; i < n; i++) {

        cout << "\n";
        for (int j = 0; j < n; j++) {

            cout << setw(5) << matrix[i][j] << "  ";
        }
    }
    cout << "\n" << endl;
}


void posit(double **matrix, int n){

    double first = -1;
   for (int i = 0; i < n; i++) { 

        double pos = 0;
        for (int j = 0; j < n; j++) {

            if(j == n-i-1){

                if(matrix[n - j - 1][n - i - 1] > 0 ){

                    pos = matrix[n - 1 - j][n - i - 1];
                    cout << "Додатнье значення на побічній діагоналі A[" << i + 1 << "][" << j + 1 << "]= " << pos << "\n";
                    if(pos > 0 && first == -1){

                        first = matrix[n - j - 1][n - i - 1];
                        first_el = first;
                        fi = n - j - 1;
                        fj = n - i - 1;

                    }
                }
            }
        }
    }
    cout << "\n Перше додатнье значення на побічній діагоналі: " << first_el << "\n";    
             fi = fi;
            fj = fj;
    cout << "координати: [" << fi + 1 << "][" << fj + 1 << "]" << "\n\n";
    
}



void negat(double **matrix, int n){

    double last = 0;  
   for (int i = 0; i < n; i++) {  

        double neg = 0;
        for (int j = 0; j < n; j++) {

            if(j == n-i-1){
                
                if(matrix[n - j - 1][n - i - 1] < 0 ){

                    neg = matrix[n - 1 - j][n - i - 1];
                    cout << "Негативні значення на побічній діагоналі A[" << i + 1 << "][" << j + 1 << "]= " << neg << "\n";
                    last=neg;
                    li = n - j - 1;
                    lj = n - i - 1;
                    }
                }
            }
        }
        last_el = last;
        cout << "\n Останнє негативне значення на побічній діагоналі: " << last_el << "\n";      
        li = li;      
        lj = lj;
        cout << "координати: [" << li + 1 << "][" << lj + 1 << "]" << "\n\n\n";
    }     



void reset(double **matrix, int n){

    for (int i = 0; i < n; i++) {    

        for (int j = 0; j < n; j++) {

            if(j == i && i == fi){ 
            matrix[i][fj] = matrix[i][j];    
            matrix[i][j] = first_el;
           cout << "Елемент ["<< i + 1 << "]["<<  fj + 1 << "]: "<< matrix[i][j] << " міняється з "  << " ["<< i + 1 << "]["<<  j + 1 << "]: " << matrix[i][fj] << "\n\n" ;
            }

            if(j == i && i == li){ 
            matrix[i][lj] = matrix[i][j];
            matrix[i][j] = last_el;

            
            cout << "Елемент ["<< i + 1 << "]["<<  lj + 1 << "]: "<< matrix[i][j] << " міняється з " << " ["<< i + 1 << "]["<<  j + 1 << "]: " << matrix[i][lj] << "\n\n\n" ;
            }
        }
    }
}



void Delete(double **Matrix, int n) {

    for (int i = 0; i < n; ++i) {
        delete[] Matrix[i];
    }
    delete[] Matrix;
}

