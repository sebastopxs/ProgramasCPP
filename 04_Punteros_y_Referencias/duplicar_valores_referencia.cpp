#include <iostream>
using namespace std;

void duplicarValores(int funcion[], int aumen) {
    for (int i = 0; i < aumen; i++) {
        funcion[i] = funcion[i] * 2; 
    }
}

int main() {
    
    int pepe[3];
    
    for (int j = 0 ; j <3 ;j++){
        cout<<"Introduce valores a las entrada "<<j<<endl;
        cin >> pepe[j];
    }
    
    cout << "Valores originales: " << pepe[0] << ", " << pepe[1] << ", " << pepe[2] << endl;
    

    duplicarValores(pepe, 3);
    
  
    cout << "Nuevos valores: " << pepe[0] << ", " << pepe[1] << ", " << pepe[2] << endl;
    
    return 0;
}
