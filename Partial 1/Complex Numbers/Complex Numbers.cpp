#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
class Complex
{
  public: 
  float r;
  float i;
  void readNumbers()
  {
    cout<<"What is the real number of the complex number? ";
    cin>>r;
    cout<<"What is the imaginary number of the complex number? ";
    cin>>i;
  }
  void sumComplex(Complex ca,Complex cb)
  {
    ca.r=ca.r+cb.r;
    ca.i=ca.i+cb.i;
    cout<<"The sum is "<<ca.r<<" + "<<ca.i<<"i"<<endl;
  }
  void subsComplex(Complex ca,Complex cb)
  {
    ca.r=ca.r-cb.r;
    ca.i=ca.i-cb.i;
    cout<<"The substraction is "<<ca.r<<" - "<<ca.i<<"i"<<endl;
  }
};
int main()
{
  Complex ca;
  Complex cb;
  int op;
  ca.readNumbers();
  cb.readNumbers();
  do
  {
    cout<<"What do you wish to do?"<<endl;
    cout<<"1. Sum"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>op;
    switch(op)
    {
      case 1:
      {
        ca.sumComplex(ca,cb);
        break;
      }
      case 2:
      {
        ca.subsComplex(ca,cb);
        break;
      }
    }
  }while(op != 3);
}