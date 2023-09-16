#include <iostream>
using namespace std;
// Рекурсивная функция поиска суммы ряда
int recursion_func(int n){
    if (n == 1){
        return 5;
    }
    return 5*n + recursion_func(n-1);
}
int main(){
    // Просим вести число, инициализируем int n,  проверяем, чтоб число было больше нуля.
    int n;
    cout << "Enter n: ";
    cin >> n;
    if(n<=0){cout << "n must be more than zero";}
    else{
    cout << recursion_func(n);
    }
    return 0;
}
