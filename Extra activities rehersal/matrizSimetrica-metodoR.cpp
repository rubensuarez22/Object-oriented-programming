#include <iostream>
using namespace std;


int main(){

    int matrizA[3][3], matrizB[3][3], si=0,no=0;
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
            if (matrizA[i][j]==matrizB[i][j])
            {
                 si=si+1;
            }else{
                 no=no+1;
            }
        }
        cout<<endl;
    }
                

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            cout<<matrizB[i][j]<<" ";
        }
        cout<<endl;
    }
        
        cout<<si<<endl;
        cout<<no<<endl;
    if ((si=3*3)){//3 es el numero de filas y columnas simetrica tiene igual numero de filas y columnas. Siempre seran numeros cuadrados. TODOS deben coincidir.
        cout<< "Es simetrica";
    }else {
        cout<<"No es simetrica";
    }
}