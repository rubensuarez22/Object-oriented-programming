#include <iostream>
using namespace std;

int main()
{
    int numeros[]={1,2,3,4,5}, suma;

    for (int i = 0; i < 5; i++)
    {
        suma+=numeros[i];
        cout<<numeros[i]<<"+";
    }
    cout<<" la suma es "<<suma<<endl;
    
}