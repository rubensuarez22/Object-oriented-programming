#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

class polynomial
{
public : 
    float a[6]={0};
    int exp;
    void readData()
    {
      int i;
        do
        {
          cout<< "Write the highest exponent (no more than 5)"<<endl;
          cin>>exp;
        } while (exp >= 6);
      for (i=0; i<=exp; i++)
      {
      cout<< "Write the coefficient for the polynomial with exponent =" <<i<<endl;
      cin>>a[i];
      }
    }
  
    void showPolynomial()
    {
      int i;
        for(i=exp; i>=0; i--)
        {
          if (i==0)
          {
            cout << a[i];
          } 
          else 
          {
            cout << a[i] <<"x^"<< i<<" + ";
          }
          
          
        }
    cout<< endl;
    }
};
  int main(){
    polynomial a, b;
    a.readData();
    b.readData();
    a.showPolynomial();
    b.showPolynomial();
    int i;
    for (i=a.exp; i>=0; i--)
    {
      a.a[i]=b.a[i]+a.a[i];
      
    }
    cout <<"The sum of both polynomials is = " << endl;
    a.showPolynomial();
    
    return 0;
  }  
