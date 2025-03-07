#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main(){
    char palabra[] = "Hola mundo";
    char palabra2[] = " maravilloso";
    char palabra3[40];
    
    strcpy(palabra3, palabra);
    strcat(palabra3, palabra2);
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    int frecuenciaVocales[5];
    int contadorVocales;
    for (int i = 0; i<5; i++){
        contadorVocales = 0;
        for(size_t j = 0; j<strlen(palabra3); j++){
            if(palabra3[j] == vocales[i]){
                contadorVocales++;
            }
        }
        frecuenciaVocales[i] = contadorVocales;
    }
    for (int i = 0; i<5; i++){
        cout << "Numero de vocales " << vocales[i] << " : " << frecuenciaVocales[i] << endl;
    }


    /* SOLUCION MIA 
    vector<int> numVocales;
    int a= 0, e= 0, i= 0, o = 0, u = 0;
    for (int j = 0; j<strlen(palabra3); j++){
        if (palabra3[j] == 'a'){
            a++;
        }else if (palabra3[j] == 'e'){
            e++;
        }else if (palabra3[j] == 'i'){
            i++;
        }else if (palabra3[j] == 'o'){
            o++;
        }else if (palabra3[j] == 'u'){
            u++;
        }
    }
    numVocales.push_back(a);
    numVocales.push_back(e);
    numVocales.push_back(i);
    numVocales.push_back(o);
    numVocales.push_back(u);
    int temp = 0;
    for(int i= 0; i<numVocales.size(); i++){
        for (int j = 0; j<numVocales.size(); j++){
            if(numVocales[i]>numVocales[j]){
                temp = numVocales[i];
                numVocales[i] = numVocales[j];
                numVocales[j] = temp;
            }
        }    }
    vector<int>:: iterator it;
    for(it=numVocales.begin(); it<numVocales.end(); it++){
        cout << "Numero de vocales: " << *it << endl;
    }
    */
}