#include <iostream>
#include <vector>
using namespace std;


vector<int> mergeSort(vector<int> izquierda, vector<int> derecha);
vector<int> merge(vector<int> arreglo, int inicio, int final)
{
    if (inicio == final)
    {
        vector<int> dato;
        dato.push_back(arreglo[inicio]);
        return dato;
    }
    int mitad = (inicio + final) / 2;
    vector<int> izquierda = merge(arreglo, inicio, mitad);
    vector<int> derecha = merge(arreglo, mitad + 1, final);
    return mergeSort(izquierda, derecha);
}

vector<int> mergeSort(vector<int> izquierda, vector<int> derecha)
{
    int i = 0;
    int j = 0;
    vector<int> resultado;

    while (i < izquierda.size() && j < derecha.size())
    {
        if (izquierda[i] < derecha[j])
        {
            resultado.push_back(izquierda[i]);
            i++;
        }
        else
        {
            resultado.push_back(derecha[j]);
            j++;
        }
    }
    while (i < izquierda.size())
    {
        resultado.push_back(izquierda[i]);
        i++;
    }
    while (j < derecha.size())
    {
        resultado.push_back(derecha[j]);
        j++;
    }
    return resultado;
}
int busquedaBinaria(const vector<int>& arreglo, int valor)
{
    int izquierda = 0;
    int derecha = arreglo.size() - 1;

    while (izquierda <= derecha)
    {
        int mitad = (izquierda + derecha) / 2;

        if (arreglo[mitad] == valor)
            return mitad;

        if (arreglo[mitad] < valor)
            izquierda = mitad + 1;
        else
            derecha = mitad - 1;
    }

    return -1; 
}

int main()
{
    vector<int> arreglo = {7, 11, 9, 8};
    vector<int> arregloOrdenado = merge(arreglo, 0, arreglo.size() - 1);

    cout << "El arreglo ordenado: ";
    for (int i : arregloOrdenado)
    {
        cout << i << '\t';
    }
    cout << endl;

    int IndiceABuscar = 8;
    int indice = busquedaBinaria(arregloOrdenado, IndiceABuscar);

    if (indice != -1)
        cout << "El valor " << IndiceABuscar << " se encuentra en el índice " << indice << endl;
    else
        cout << "El valor " << IndiceABuscar << " no se encuentra en el arreglo." << endl;

    return 0;

    int coseno_angulo = 1;
    int color = 1;
    int distancia = 3;


    // Esto es MUY común en shaders:
    float brillo = pow(coseno_angulo, 128);  // Especular highlight
    float gamma = pow(color, 2.2);          // Corrección de color
    float atenuacion = pow(distancia, -2);  // Luz que se desvanece


}
