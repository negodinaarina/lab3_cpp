#include <cmath>
#include <iostream>
using namespace std;
// функция поиска площади равностороннего треугольник
double find_square(int a){
    return sqrt(3)*a*a/4;
}
// функция поиска площади разностороннего треугольника
double find_square(int a, int b, int c){
    double p = (a + b + c) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(){
    bool triangle_type;
    //Просим выбрать тип треугольника и ввести стороны
    cout << "If triangle is equilateral - type in 1, else - 0";
    cin >> triangle_type;
    if(triangle_type){
        int a;
        cout << "Enter a: ";
        cin >> a;
        cout << find_square(a);
    }
    else{
        int a; int b; int c;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;
        cout << find_square(a, b, c);
    }
}
