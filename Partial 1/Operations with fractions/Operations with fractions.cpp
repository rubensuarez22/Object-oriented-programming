#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
using namespace std;
class Fraction
{
  public:
  int num;
  int den;
  void readdata()
{
  cout<<" Numerator ? ";
  cin>>num;
  do
    {
      cout<<" Denominator (not zero) ?";
      cin>>den;
    }while(den == 0);  
}//end readdata()
void showfraction()
{
 if(den!=0)
 {
   if((num<0)||(den<0))
   {
     cout<<" - ";
     cout<<fabs(num)<<endl;
     if((den!= 1)&&(num!=0))
    {
       cout<<"-----"<<endl;
      cout<<"   "<<fabs(den)<<endl;
    }
   }
   else
   {
   cout<<fabs(num)<<endl;
   if((den!= 1)&&(num!=0))
   {
     cout<<"----"<<endl;
     cout<<fabs(den)<<endl;
   }
  }
 }
  else
 {
   cout<<"NAN, division by zero"<<endl;
 }
  
}//end showfraction
void simplify()
{
  int big,small,rem;
  if(num>den)
  {
    big=num;
    small=den;
  }
  else
  {
    big = den;
    small = num;
  }
  if(small != 0)
  {// !== not
  do
    {
      rem = big%small;
      big=small;
      small=rem;
    }while(rem!=0);
  num = num/big;
  den = den/big;  
  }//endif
}//end of simplify
void add(Fraction a, Fraction b)
{
  num = a.num*b.den+a.den*b.num;
  den = a.den*b.den;
}
void substraction(Fraction a, Fraction b)
{
  num = a.num*b.den - a.den*b.num;
  den = a.den*b.den;
}
void multiply(Fraction a,Fraction b )
{
  num = a.num * b.num;
  den = a.den * b.den;
}//end of multiply
void divide(Fraction a,Fraction b)
{
  num = a.num * b.den;
  den = a.den*b.num;
}
}; //end of class Fraction
void menu() 
{
    Fraction f1,f2,res;
    int op;
    cout<<"First Fraction"<<endl;
    f1.readdata();
    cout<<"Second Fraction"<<endl;
    f2.readdata();
    do
    {
      printf("\e[1;1H\e[2J");// clear scr
      cout<<"Choose between the following actions "<<endl;
      cout<<"1.- Change Data"<<endl;
      cout<<"2.- Addition"<<endl;
      cout<<"3.- Substraction"<<endl;
      cout<<"4.- Multiplication"<<endl;
      cout<<"5.- Divide"<<endl;
      cout<<"6.- Quit"<<endl;
      cout<<"Your option ? ";
      cin>>op;
      switch(op)
        {
          case 1:
          {
            cout<<"First Fraction"<<endl;
            f1.readdata();
            cout<<"Second Fraction"<<endl;
            f2.readdata();
            break;
           }//end case 1
          case 2:
          {
            res.add(f1,f2);
            res.simplify();
            cout<<"The addition is"<<endl;
            res.showfraction();
            break;
          }//end case 2
          case 3:
          {
            res.substraction(f1,f2);
            res.simplify();
            cout<<"The substraction is"<<endl;
            res.showfraction();
            break;
          }//end case 3
          case 4:
          {
            res.multiply(f1,f2);
            res.simplify();
            cout<<"The multiply is"<<endl;
            res.showfraction();
            break;
          }//end case 4
           case 5:
          {
            res.divide(f1,f2);
            //res.simplify();
            cout<<"The divide is"<<endl;
            res.showfraction();
            break;
          }//end case 5
         
        }//endswitch
        getchar();
        cout<<"Press ENTER to go on ";
        getchar();
    }while(op != 6);
       
}//end menu
int main()
{
  menu();
  return 0;
}
