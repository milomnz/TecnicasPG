#include <iostream>

using namespace std;

int main(){
	int x = 2;
	int* puntX = &x;
	cout << "Direccion de x: " << puntX << endl;
    //No olvidar * para imprimir valor
    cout << "Valor de x: " << *puntX << endl;
	return 0;
}