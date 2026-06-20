#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> A = {1, 3, 5};
    vector<int> B = {0, 2, 4};
    vector<int> C = {1, 1, 1};
    
    cout<<"VECTOR A: "<<endl;
    for (int n : A)
        cout << n << " ";
    cout<<"\nVECTOR B: "<<endl;   
    for (int n : B)
        cout << n << " ";    
    cout<<"\nVECTOR C: "<<endl;
    for (int i = 0; i <= 2; i++)
        C[i] = A[i] + B[i];
    cout<<"\nSUMA DE VECTOR A + VECTOR B: "<<endl;     
    for (int n : C)
        cout << n << " ";

        
    return 0;
}
