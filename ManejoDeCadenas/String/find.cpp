#include <iostream>
#include <string>

using namespace std;

int main(){
    string cadena = "Pepito está enamorado de juanita";
    string subcadena = cadena.substr(0,11);

    cout << cadena.find("enamorado");
    return 0;
}