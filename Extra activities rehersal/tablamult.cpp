#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int numero, nnumero;
    cout << "numero = "; 
    cin >> numero;
    if ((numero <= 10) && (numero > 0))
    {
        for (int i = 1; i <= 10; i++)
        {
            nnumero=numero*i;
            cout<<i<<" x "<<numero<<" = "<<nnumero<<endl;
            
        }
    }
return 0;
}