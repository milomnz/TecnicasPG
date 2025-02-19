#include <iostream>
using namespace std;

int main(){
    int arreglo[13] = {2,4,1,6,8,3,5,2,1,4,7,11,10};
    int arregloPares = 0;
    int arregloImpares = 0;
    for (int i=0;i<13;i++){
        if(arreglo[i] %2 == 0){
            arregloPares++;
        }else{
            arregloImpares++;
        } 
   }
   /*
    int arreglo1[arregloPares];
    int arreglo2[arregloImpares];
    */
    for(int i=0;i<arregloPares; i++){
        if(arreglo[i] %2){
            //arreglo1 + arreglo[i];
        }
    }

}
