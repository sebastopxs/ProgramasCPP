#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int A[2];
    int B[2];
    int SUMA[2];
    for (int i=0 ; i<2 ; i++){
        cout<<"Introduzca un valor para la casilla "<< i << endl;
        cin>> A[i];
    }
    for (int i=0 ; i<2 ; i++){
        cout<<"Introduzca un valor para la casilla "<< i << endl;
        cin>> B[i];
    }
    
    for (int i=0 ; i<2 ; i++){
        SUMA[i]= A[i] + B[i];
    }
    
    cout<<endl;
    for (int n : SUMA)
    cout << n << " ";
}
