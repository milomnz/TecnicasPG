#include <iostream>
#include <vector>
using namespace std;

void agregarProductos(vector<string>);
void eliminarProducto(vector<string>);
void buscarProducto(vector<string>);
void ordenarProductos(vector<string>);

int main(){
    vector<string> productos;
    int pos;

    char opcion ;
    string nombre;



    do{
        cout << "Bienvenido '\t' Pulse:  " << "1. Para agregar un producto" << '\n' << "2. Para eliminar un producto" << '\n' << "3. Para buscar un producto" << '\n' << "4. Para ordenar los productos" << ".\t" << "5. Para salir";
        cin >> opcion;
        switch (opcion){
            case 1:
            agregarProductos(productos);
            continue;

            case 2:
            eliminarProducto(productos);
            continue;

            case 3: 
            buscarProducto(productos);
            continue;

            case 4:
            ordenarProductos(productos);

            case 5:
            break;
            
            
        }
        



    }while (opcion != 7);
}

void agregarProducto(vector<string> productos){
    string nombre;
    int pos;
    cout << "Ingrese el nombre del producto.";
    cin  >> nombre;
    cout << "Ingrese la posicion en la que desea agregar el producto";
    cin >> pos;
    if(pos>productos.size()){
        cout << "El producto no se pudo ingresar puesto que la posicion no existe '\t'";
    }else{
        productos.insert(productos.begin()+pos, nombre);
        cout << "Producto agregado exitosamente";
    }
}

void eliminarProducto(vector<string> productos){
    int pos;
    cout << "Ingrese la posicion de la cual desee eliminar el producto";
    cin >> pos;
    if (pos>productos.size()){
        cout << "El producto no se puede agregar";
    }else{
        productos.erase(productos.begin()+pos);
        cout << "Producto eliminado con exito";
    }
}

void buscarProducto(vector<string> productos){
    string nombreAbuscar;

    cout << "Como se llama el producto que quiere buscar";
    cin >> nombreAbuscar;

    vector<string>::iterator it;

    for (int i= productos.begin(); i<productos.end(); i++){

    }

}