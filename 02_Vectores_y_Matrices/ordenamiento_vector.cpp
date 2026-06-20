#include <iostream>
using namespace std;

void Ascendente(int vec[], int tam) {
    int inter;
    
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {

            if (vec[i] > vec[j]) {
                inter = vec[i];
                vec[i] = vec[j];
                vec[j] = inter;
            }
        }
    }
}

void Descendente(int vec[], int tam) {
    int inter;
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {

            if (vec[i] < vec[j]) {
                inter = vec[i];
                vec[i] = vec[j];
                vec[j] = inter;
            }
        }
    }
}

void mostrarVector(int vec[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    int vector[5];
    int tamano = 5;

    for (int i = 0; i < tamano; i++) {
        cout << "Introduce el valor para la posicion [" << i << "]: ";
        cin >> vector[i];
    }

    cout << "Vector original: "<<endl;
    mostrarVector(vector, tamano);

    Ascendente(vector, tamano);
    cout << "Vector Ascendente: "<<endl;
    mostrarVector(vector, tamano);

    Descendente(vector, tamano);
    cout << "Vector Descendente: "<<endl;
    mostrarVector(vector, tamano);

    return 0;
}
