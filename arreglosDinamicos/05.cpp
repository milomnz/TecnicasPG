#include <iostream>
#include <vector>
using namespace std;

int main() { 
    vector <int> edades;
    edades.push_back(20);
    //Permite acceder al primer elemento del vector .begin();
    cout << "Primer elemento: " << *(edades.begin());
    //Elimina el ultimo elemento. pop_back()
    edades.pop_back();
    cout << "Número de edades: " << edades.size();
}