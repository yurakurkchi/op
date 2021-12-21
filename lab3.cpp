#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double  x, ε, PreArctg, arctg, i = 0;
    cout << "Введите значение аргумента арктангенса: ";
    cin >> x;
    if (abs(x) >= 1)
    {
        cout << "Введите значение аргумента арктангенса в диапазон (-1;1): ";
        cin >> x;
    }
    cout << "Введите точность вычисления: ";
    cin >> ε;
    arctg = x;
    do 
    {
        i = i + 1;
        PreArctg = arctg;
        arctg = arctg + ((pow(-1, i) * pow(x, 2 * i + 1)) / (2 * i + 1));
    } 
    while (abs(arctg - PreArctg) > ε);
    cout << arctg << endl;
    system("pause");
    return 0;
}