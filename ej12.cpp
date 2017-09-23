#include <iostream>
using namespace std;
 
int main()
{
    // Puntero a una matriz
    int **pm;
 
    pm = new int* [5];
    for (int i = 0; i < 5; i++) {
        pm[i] = new int[3];
    }
    cout << "Elementos de la Matriz con sus direcciones, con aritmética de punteros: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            // Aritmética de punteros
            *(*(pm + i) + j) = i + j;
            cout << *(*(pm + i) + j) << "-->"<<&pm[i][j] << "	";
        }
        cout << endl;
    }
 
    // Elimino cada vector de la matriz
    for (int i = 0; i < 5; i++) {
        delete[] pm[i];
    }
 
    // Elimino el vector principal
    return 0;
}
