#include <iostream>
// Ejercicio rapido
using namespace std;

struct Libro{
    string titulo; int anioPublicacion;

};

int main(){
    Libro librito;
    librito.titulo = "El principito";
    librito.anioPublicacion  = 1943;
    cout << "El titulo es : "<<librito.titulo << endl;
    cout << "El año de publicación del libro es: "<< librito.anioPublicacion << endl; 
}