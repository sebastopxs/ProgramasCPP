#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int pepe[2][3];
    int pozo[2][3];
    int suma[2][3];
    for (int i = 0 ; i<2 ; i++){
        for (int j = 0 ; j<3 ;j++){
            cout << "Introduzca un valor para la fila "<< i << " y columna " <<j<<endl;
            cin >> pozo[i][j];
        }
    }
    
    for (int i = 0 ; i<2 ; i++){
        for (int j = 0 ; j<3 ;j++){
            cout << "Introduzca un valor para la fila "<< i << " y columna " <<j<<endl;
            cin >> pepe[i][j];
        }
    }
    cout<<endl;
    for (int i = 0 ; i<2 ; i++){
        for (int j = 0 ; j<3 ;j++){
            suma[i][j] = pozo[i][j] + pepe[i][j];
        }
    }
    
    
    for (int i = 0 ; i<2 ; i++){
        for (int j = 0 ; j<3 ;j++){
            cout <<suma[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
