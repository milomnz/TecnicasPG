#include <iostream>
using namespace std;

int factorial(int num);

int main(){
    int num = 5;
    int resul =  factorial(5);
    cout << "El resul: " << resul;
    return 0;
}

int factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * factorial(n-1);
}