#include <iostream>
using namespace std;

// 1. DEFINICIÓN DE LA FUNCIÓN (Se hace arriba del main)
// Tipo de retorno (int), Nombre (sumarNumeros), Parámetros (a y b)
int sumarNumeros(int a, int b) {
    int resultado = a + b;
  // La función "escupe" el valor final
    return resultado;     
}

int main() {
    int x = 15;
    int y = 5;
    
    // 2. LLAMADA A LA FUNCIÓN
    // El main usa la máquina que creamos arriba
    int total = sumarNumeros(x, y); 
    
    cout << "La suma total es: " << total << endl;

    return 0;
}
