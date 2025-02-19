#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> edades;
    edades.push_back(23);
    edades.push_back(20);
    edades.push_back(23);

    for(size_t i=0;i<edades.size();i++){

        // Metodo .at()
        cout << edades.at(i) <<'\t'<< endl;
    }

}