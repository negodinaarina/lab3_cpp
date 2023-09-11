#include <iostream>
using namespace std;

int recurs_func(int number){
    if(number > 1)
        recurs_func(number/2);
    cout << number % 2;
    return 0;
}

int main(){
    cout << "Enter n: ";
    int number;
    cin >> number;
    recurs_func(number);
    return 0;
}