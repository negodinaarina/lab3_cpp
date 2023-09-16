# include <iostream>
# include <windows.h>
# include <conio.h>
# include <math.h>
using namespace std;
//Функция подсчета корня по формуле
double sqrt_f(double x)
{
    float y, y1;
    y = x;
    do {
        y1=y;
        y=0.5*(y+3*x/(2*y*y + x/y));
    }
    while (abs(y-y1)>1/100000);
    return y;

}

int main()
{
    double a, x;
    cout << "Enter x: " << endl;
    cin >> x;
    a = pow(x, 1.0 / 3);
    cout << "\nSquare root via pow function " << a << endl;
    cout << "Square root via iteration " << sqrt_f(x);
}
