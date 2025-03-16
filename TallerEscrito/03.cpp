#include <iostream>
#include <vector>

using namespace std;

int main (){
    vector<vector<int>> matriz(3, vector<int>(3));
    vector<int> Vpromedio ;
    // Llenar matriz. 
    for(size_t i = 0; i<matriz.size(); i++){
        for(size_t j = 0; j<matriz[0].size();j++){
            cout << "Digite un valor" << endl;
            cin >> matriz[i][j];
        }
    }

   for(size_t col = 0; col<matriz[0].size(); col++){
        int suma = 0;
        for(size_t fil = 0; fil<matriz.size(); fil++){
           suma+= matriz[fil][col] ;
        }
        float prom = suma/matriz.size();
        Vpromedio.push_back(prom);
   }

   for(int i: Vpromedio){
    cout << "Promedio de la columna " << i << '\t'<< endl;
   }

}