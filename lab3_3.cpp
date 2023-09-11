#include <cmath>
#include <iostream>
using namespace std;
double find_square(int a){
    return sqrt(3)*a*a/4;
}

double find_square(int a, int b, int c){
    double p = (a + b + c) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(){
    bool triangle_type;
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