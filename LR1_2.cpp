/*2 Вариан. Большие формулы*/
#include <iostream>
#include <iomanip>
/*HelloWorld*/
using namespace std;
/*Изменения друга*/
int main(void)
{
    float P,Q,R,x,P1;

    
    cout << "Введите значение P (От -10^3 да 10^3): \n";
    cin >> x;
    P1=x*x*x*x*x*x*x*x*x;
    P = x*x*(-3.3*P1 - 129.432) - 3.3;
    Q = x*x*x*(x*(5.0001*(x*x)-3.0001)-9.0001);
    R=P/Q;
    cout <<"Для x=" << x << ":" << "\n" << setw(5) << setprecision(6) <<"P=" << P << "\n" << setw(5) << setprecision(13) << "Q=" << Q << '\n' << "Для x=" << x << " " << "Результат равен " << R;
}
