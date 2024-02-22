#include <iostream>
using namespace std;

int main(){

    int fila, columna, matriz1[5][5]={0}, matriz2[5][5]={0}, matriz3[5][5];
    cout << "fila : " << endl;
    cin >> fila;
    cout<< "columna : "<< endl;
    cin >> columna;

    cout << "matriz 1 : ";

    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            cout << "posicion "<<i<<" , "<<j<<" : "<<endl;
            cin >> matriz1[i][j];
        }
        
    }
    
    cout << "matriz copiada"<<endl;
    

    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            matriz2[i][j]=matriz1[i][j];
        }   
    }
  for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            cout << matriz2[i][j];
            
        }   
        cout <<endl;
    }

    
}