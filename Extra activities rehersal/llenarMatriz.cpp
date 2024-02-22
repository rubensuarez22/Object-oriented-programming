#include <iostream>

using namespace std;

int main(){
    int matriz[100][100], filas, columnas;
    cout<<"Ingresa el tamano de las filas de la matriz"<<endl;
    cin>>filas;
    cout<<"Ingresa el tamano de las columnas de la matriz"<<endl;
    cin>>columnas;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Ingresa el valor de la posicion "<<i+1<<","<<j+1<<" : ";
            cin>>matriz[i][j];
        }
        
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    

    system ("pause");
}