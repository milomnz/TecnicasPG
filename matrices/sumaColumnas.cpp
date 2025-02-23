#include <iostream>
using namespace std;

// 1. Declarar funciones o procedimientos

int sumaColumnas(int[][3], int, int);

// 2. Inicializar el int main()
int main(){
// 3. Declarar variables
	int matriz[2][3] = {{2,3,1},{4,5,2}};
	int filas =2, columnas = 3;
// 4. Ingresar datos
	
// 5 Llamar funciones o procedimientos
	for(int i = 0;i<filas; i++){
		int suma = sumaColumnas(matriz, filas, i);
		cout <<suma<< '\t';
	}
	return 0;
}
int sumaColumnas(int matriz[][3], int fila, int col){
	int suma = 0;
	
	for (int i = 0; i<col;i++){
		suma += matriz[col][i];
	}
	return suma;



}

// 6 Imprimir resultados

// 7 Progamar las funciones o procedimientos
