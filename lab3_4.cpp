#include <iostream>
using namespace std;
int recursion_func(int n){
    if (n == 1){
        return 5;
    }
    return 5*n + recursion_func(n-1);
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << recursion_func(n);
}