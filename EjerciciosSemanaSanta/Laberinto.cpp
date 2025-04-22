#include <iostream>

using namespace std;

void imprimirLaberinto(char laberinto[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << laberinto[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

bool moverArriba(char (&laberinto)[5][5], int &x, int &y) {
    if (x - 1 < 0) {
        cout << "No puedes moverte fuera del laberinto." << endl;
        return false;
    }
    if (laberinto[x - 1][y] == ' ' || laberinto[x - 1][y] == 'S') {
        if (laberinto[x - 1][y] == 'S') {
            cout << "¡Ganaste!" << endl;
            return true;
        }
        laberinto[x][y] = ' ';
        x--;
        laberinto[x][y] = 'P';
    } else {
        cout << "No puedes moverte" << endl;
    }
    return false;
}

bool moverAbajo(char (&laberinto)[5][5], int &x, int &y) {
    if (x + 1 >= 5) {
        cout << "No puedes moverte fuera del laberinto." << endl;
        return false;
    }
    if (laberinto[x + 1][y] == ' ' || laberinto[x + 1][y] == 'S') {
        if (laberinto[x + 1][y] == 'S') {
            cout << "¡Ganaste!" << endl;
            return true;
        }
        laberinto[x][y] = ' ';
        x++;
        laberinto[x][y] = 'P';
    } else {
        cout << "No puedes moverte" << endl;
    }
    return false;
}

bool moverIzquierda(char (&laberinto)[5][5], int &x, int &y) {
    if (y - 1 < 0) {
        cout << "No puedes moverte fuera del laberinto." << endl;
        return false;
    }
    if (laberinto[x][y - 1] == ' ' || laberinto[x][y - 1] == 'S') {
        if (laberinto[x][y - 1] == 'S') {
            cout << "¡Ganaste!" << endl;
            return true;
        }
        laberinto[x][y] = ' ';
        y--;
        laberinto[x][y] = 'P';
    } else {
        cout << "No puedes moverte" << endl;
    }
    return false;
}

bool moverDerecha(char (&laberinto)[5][5], int &x, int &y) {
    if (y + 1 >= 5) {
        cout << "No puedes moverte fuera del laberinto." << endl;
        return false;
    }
    if (laberinto[x][y + 1] == ' ' || laberinto[x][y + 1] == 'S') {
        if (laberinto[x][y + 1] == 'S') {
            cout << "¡Ganaste!" << endl;
            return true;
        }
        laberinto[x][y] = ' ';
        y++;
        laberinto[x][y] = 'P';
    } else {
        cout << "No puedes moverte" << endl;
    }
    return false;
}

int main() {
    char laberinto[5][5] = {
        {'P', '#', '#', '#', '#'},
        {' ', ' ', ' ', ' ', '#'},
        {'#', ' ', '#', ' ', '#'},
        {'#', ' ', '#', ' ', ' '},
        {'#', '#', '#', '#', 'S'}
    };

    int posX = 0, posY = 0; // posición inicial

    char opcion;
    bool victoria = false;

    while (!victoria) {
        imprimirLaberinto(laberinto);
        cout << "Movimiento (W/A/S/D): ";
        cin >> opcion;

        switch (toupper(opcion)) {
            case 'W': victoria = moverArriba(laberinto, posX, posY); break;
            case 'S': victoria = moverAbajo(laberinto, posX, posY); break;
            case 'A': victoria = moverIzquierda(laberinto, posX, posY); break;
            case 'D': victoria = moverDerecha(laberinto, posX, posY); break;
            default: cout << "Comando invalido." << endl;
        }
    }

    return 0;
}
