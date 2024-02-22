#include <iostream>
using namespace std;


int main(){

    int matrizA[3][3], matrizB[3][3], filas,columnas;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<"Ingresa los datos de la matriz en la posicion ["<<i+1<<"]"<<"["<<j+1<<"]";
            cin>>matrizA[i][j];
        }
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizB[i][j]=matrizA[j][i];
        }
    }
    
    

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            cout<<matrizB[i][j]<<" ";
        }
        cout<<endl;
    }

    
}