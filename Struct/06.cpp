#include <iostream>
#include <string>

using namespace std;

struct Estudiante{string nombre; int edad; float prom;};
void actualizarPromedio(Estudiante &);

int main(){
    Estudiante estudiante1;
    estudiante1.edad = 17;
    estudiante1.nombre = "Juan";
    estudiante1.prom = 3.5;
    actualizarPromedio(estudiante1);
    cout << estudiante1.prom ;
}

void actualizarPromedio(Estudiante &es){
    cout << "Digite el nuevo promedio";
    cin >> es.prom;
}