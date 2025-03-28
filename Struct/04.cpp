#include <iostream>

using namespace std;

struct Persona{string nombre; int edad;};
void modificarDatos(Persona &, string, int);

int main(){
    Persona persona1;
    Persona persona2;
    modificarDatos(persona1, "Daniel", 22);
    modificarDatos(persona2, "Susana", 18);
    cout << "Persona 1: "<< persona1.nombre << '\t' << persona1.edad ;
    cout << "Persona 2: "<< persona2.nombre << '\t' << persona2.edad ;
}

void modificarDatos(Persona &usuario, string nombre, int edad){
    usuario.nombre = nombre;
    usuario.edad = edad;
}