#include <iostream>
using namespace std;

int recurs_func(int number){
    // если число больше 1, вызываем функцию рекурсивно, передавая в качестве аргумента число/2
    if(number > 1)
        recurs_func(number/2);
    cout << number % 2;
    return 0;
}

int main(){
    // Просим ввести число, инициализируем int number, вызываем рекурсивную функцию
    cout << "Enter n: ";
    int number;
    cin >> number;
    recurs_func(number);
    return 0;
}
