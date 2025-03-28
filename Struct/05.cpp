#include <iostream>

using namespace std;

struct fecha{int dia; int mes; int anio;};
void fechaC(fecha);

int main(){
    fecha fecha1;
    fecha1.dia = 17;
    fecha1.mes = 03;
    fecha1.anio = 2024;
    fechaC(fecha1);
    return 0;
}

void fechaC(fecha f){
    char sep = '/';
    cout << f.dia << sep << f.mes << sep << f.anio;
}