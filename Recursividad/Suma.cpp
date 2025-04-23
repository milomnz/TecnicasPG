#include <iostream>
#include <vector>

using namespace std;

int suma(int n, int i);

int main(){
    int num = 10;
    int varRecursiva = 1;
    int resultado = suma(num, varRecursiva);
    cout << resultado ;
    return 0;
   
}
int suma(int n, int varR){
    if(varR == n){
        return varR;
    }
    return varR + suma(n, varR+1);
}
