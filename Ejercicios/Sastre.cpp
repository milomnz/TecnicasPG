#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

/*
El sastre solo puede realizar un pedido por dia
los trabajos suelen durar varios dias. Para el iesimo trabajo (1 <=i <= n) 
el numero entero Tiempo[i] (1<= Tiempo[i] <= 1000) indica el tiempo que tarda en realizarlo.

Pero la popularidad tiene su precio. Por ca dia de retraso
antes de empezxar a trabajar en el iesimo trabajo, el sastre se ha comprometido
a pagar un recargo a su patronicador de recargo[I] (1 <= recargo[i] <= 10000) por cada dia de retraso.

Ayuda al sastre a determinar el orden de los trabajos con recargo total, aplicando fuerza bruta o ensayo y error.

Con 4 trabajos, (N = 4) Tiempo[1] = 3, Tiempo[2] = 1, Tiempo[3] = 2, Tiempo[4] = 5
Y con los siguientes recargos:
// recargo[1] = 4, recargo[2] = 4000, recargo[3] = 2, recargo[4] = 5

Si los hace primero el trabajo 1 luego el 2, luego el 3 y por ultimo el 4, el recargo total es:

en el #1 gasta 3 dias y debe pagar 12 pesos, por los 3 dias de retraso
// en el #2 gasta 1 dia y debe pagar 4000 pesos, por los 4 dias de retraso
// en el #3 gasta 2 dias y debe pagar 12 pesos, por los 6 dias de retraso
// en el #4 gasta 5 dias y debe pagar 55 pesos, por los 11 dias de retraso

// El recargo total es 12 + 4000 + 12 + 55 = 4079

*/

struct Trabajo{
    int id;
    int tiempo;
    int recargo;
    bool operator<(const Trabajo& otro) const {
        return id < otro.id; // Solo para generar permutaciones
    }

};

int main(){
    vector<Trabajo> trabajos = {{1,3, 4}, 
                                {2, 1, 4000}, 
                                {3, 2, 2}, 
                                {4, 5, 5}};
    int n = trabajos.size();
    vector<int> mejorOrden;
    int menorRecargoTotal = INT_MAX;  
    
    do
    {   
        vector<int> ordenTrabajo;
        int recargoTotal = 0;
        int dias = 0;
        // For que permite calcular el recargo total, e ir sumando los dias
        for(size_t i = 0; i < trabajos.size(); i++){
            recargoTotal += dias * trabajos[i].recargo; 
            dias += trabajos[i].tiempo;
        }
        // Comparar si el recargo total es menor al recargo total anterior
        // Si es menor, se guarda el nuevo recargo total y la nueva orden de trabajos
        if(recargoTotal < menorRecargoTotal){
            menorRecargoTotal = recargoTotal;

            mejorOrden.clear() ;
            for(size_t i = 0; i < trabajos.size(); i++){
                mejorOrden.push_back(trabajos[i].id);
            }
        }
        // Guardar la mejor orden de trabajos
       
    } while (next_permutation(trabajos.begin(), trabajos.end()));

    cout << "El menor recargo es " << menorRecargoTotal << " Y es generado por la combinacion:" <<  endl;
    for(int i : mejorOrden){
        cout << i << " ";
    }



}