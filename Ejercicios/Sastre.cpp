#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Trabajo{
    int id;
    int tiempo;
    int recargo;
    bool operator<(const Trabajo& otro) const {
        return id < otro.id;
    }
};

int main(){
    vector<Trabajo> trabajos = {{1,3, 4}, 
                                {2, 1, 4000}, 
                                {3, 2, 2}, 
                                {4, 5, 5}};
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