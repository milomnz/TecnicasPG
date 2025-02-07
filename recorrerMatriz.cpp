#include <iostream>
using namespace std;

int main(){
    int matriz[4][5] = {{2,3,4,5,6},{12,34,12,34,5},{3,4,5,6,6},{1,2,3,4,5}};
    int cont = 0;
    for (int i = 0;i<4;i++){
        for (int j =0; j<5;j++){
            //cont +=1;
            cout << matriz[i][j] << '\t';
        }
        cout << '\n';
    }
}