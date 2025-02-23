#include <iostream>
#include <vector>
using namespace std;

    /*
    * Uso del iterator para recorrer un vector  
    
    
    
    */

int main(){
    vector <int> edades;
    edades.push_back(23);
    edades.push_back(20);
    vector <int>::iterator it;
    for(it = edades.begin();it<edades.end();it++){
        cout<<"edad con it "<<": " << *it<<endl;
    }
}