#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char palabra[] = "Hola mundo";
    char palabra2[] = " maravilloso";
    char palabra3[40];
    
    // Copia la cadena palabra en palabra3
    strcpy(palabra3, palabra);
    cout << "Copia " <<  palabra3 <<  endl;
    // Concatena la cadena palabra2 en palabra3
    strcat(palabra3, palabra2); '\n';
    cout << "Concatenacion " << palabra3 << endl;
    return 0;
}