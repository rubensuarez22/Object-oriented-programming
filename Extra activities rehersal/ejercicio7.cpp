#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float x,y,res,yCuadradaMenosUno;
    cout <<"Digita el nnumero de los siguientes valores"<<endl;
    cout <<"Valor de x"<<endl;cin >>x;
    ingresaYDeNuevo:
    cout <<"Valor de y"<<endl;cin >>y;
    yCuadradaMenosUno=(pow(y,2)-1);
    if(yCuadradaMenosUno==0){
        cout<<"El valor no es valido, ingresa denuevo el valor"<<endl;
        goto ingresaYDeNuevo;
    }
    res=(sqrt(x)) / yCuadradaMenosUno;
    cout<<"El resultado es "<<res<<endl;
    system("pause");
    return 0;

}