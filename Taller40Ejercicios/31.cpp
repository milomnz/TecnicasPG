#include <iostream>
#include <vector>
using namespace std;

/*
Duplicar valores pares: Llena un vector&lt;int&gt; con 10 números
ingresados por el usuario. Luego, crea un nuevo vector&lt;int&gt; donde
todos los números pares sean duplicados, mientras que los impares se
mantengan iguales.
*/

void duplicarPares(vector<int>&, vector<int>&);

int main()
{
    vector<int> numeros;
    for(int i = 0; i < 10; i++)
    {
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;
        numeros.push_back(numero);
    }

    vector<int> numerosPares;

    duplicarPares(numeros, numerosPares);

    for (int num : numerosPares){
       cout << num << '\t';
    }
    


}

void duplicarPares(vector<int>& arr,vector<int>& arr2){
    int numero;
    for (int num : arr){
        if (num % 2 == 0){
            arr2.push_back(num*2);
            cout << "El numero " << num << " se duplico y ahora es " << num*2 << '\t' << endl;
        }else{
            arr2.push_back(num);
            cout << "El numero: " << num << " No se modifico."<<'\t' << endl;
        }
    }

   
}