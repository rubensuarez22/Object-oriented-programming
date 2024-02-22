#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class Poly
{
  public:
  int degree = 0;
  int a0=0,a1=0,a2=0,a3=0,a4=0,a5=0;
  void readdegree()
  {
    do
      {
        cout<<"degree ? (0-5)";
        cin>>degree;
      }while((degree<0)||(degree>5));
  }//end readdegree
  void readcoef()
  {
    int i;
    for(i=0;i<=degree;i++)
      {
        switch(i)
          {
            case 0:
              {
                cout<<"a0 =? ";
                cin>>a0;
                if((i==degree)&&(a0==0))
                {
                  cout<<"the coefficient cannot be zero"<<endl;
                  i--;
                }
                break;
              }
            case 1:
              {
                cout<<"a1 =? ";
                cin>>a1;
                if((i==degree)&&(a1==0))
                {
                  cout<<"the coefficient cannot be zero"<<endl;
                  i--;
                }
                break;
              }
            case 2:
              {
                cout<<"a2 =? ";
                cin>>a2;
                if((i==degree)&&(a2==0))
                {
                  cout<<"the coefficient cannot be zero"<<endl;
                  i--;
                }
                break;
              }
            case 3:
              {
                cout<<"a3 =? ";
                cin>>a3;
                if((i==degree)&&(a3==0))
                {
                  cout<<"the coefficient cannot be zero"<<endl;
                  i--;
                }
                break;
              }
            case 4:
              {
                cout<<"a4 =? ";
                cin>>a4;
                if((i==degree)&&(a4==0))
                {
                  cout<<"the coefficient cannot be zero"<<endl;
                  i--;
                }
                break;
              }
            case 5:
              {
                cout<<"a5 =? ";
                cin>>a5;
                if((i==degree)&&(a5==0))
                {
                  cout<<"the coefficient cannot be zero"<<endl;
                  i--;
                }
                break;
              }
          }//endswitch
        
      }//endfor
  }//end readcoef
  void print()
 {
   int i;
   for(i=degree;i>=0;i--)
     {
       switch(i)
         {
           case 5:
             {
               if(i!=degree)
               {
                 if(a5>0)
                 {
                   cout<<" + ";
                 }//endif
               }//endif
               if(a5!=0)
               {
                 if(a5==1)
                 {
                   cout<<" x^5 ";
                 }
                 else
                 {
                   if(a5==(-1))
                   {
                     cout<<"-x^5";
                   }
                   else 
                   {
                     cout<<a5<<"x^5 ";
                   }//endif
                 }//endif
                   
               }//endif
               break;
             }//end case 5
           case 4:
             {
               if(i!=degree)
               {
                 if(a4>0)
                 {
                   cout<<" + ";
                 }//endif
               }//endif
               if(a4!=0)
               {
                 if(a4==1)
                 {
                   cout<<" x^4 ";
                 }
                 else
                 {
                   if(a4==(-1))
                   {
                     cout<<"-x^4";
                   }
                   else 
                   {
                     cout<<a4<<"x^4 ";
                   }//endif
                 }//endif
                   
               }//endif
               break;
             }//end case 4
           case 3:
             {
               if(i!=degree)
               {
                 if(a3>0)
                 {
                   cout<<" + ";
                 }//endif
               }//endif
               if(a3!=0)
               {
                 if(a3==1)
                 {
                   cout<<" x^3 ";
                 }
                 else
                 {
                   if(a3==(-1))
                   {
                     cout<<"-x^3";
                   }
                   else 
                   {
                     cout<<a3<<"x^3 ";
                   }//endif
                 }//endif
                   
               }//endif
               break;
             }//end case 3
           case 2:
             {
               if(i!=degree)
               {
                 if(a2>0)
                 {
                   cout<<" + ";
                 }//endif
               }//endif
               if(a2!=0)
               {
                 if(a2==1)
                 {
                   cout<<" x^2 ";
                 }
                 else
                 {
                   if(a2==(-1))
                   {
                     cout<<"-x^2";
                   }
                   else 
                   {
                     cout<<a2<<"x^2 ";
                   }//endif
                 }//endif
                   
               }//endif
               break;
             }//end case 2
           case 1:
             {
               if(i!=degree)
               {
                 if(a1>0)
                 {
                   cout<<" + ";
                 }//endif
               }//endif
               if(a1!=0)
               {
                 if(a1==1)
                 {
                   cout<<" x ";
                 }
                 else
                 {
                   if(a1==(-1))
                   {
                     cout<<"-x";
                   }
                   else 
                   {
                     cout<<a1<<"x ";
                   }//endif
                 }//endif
                   
               }//endif
               break;
             }//end case 1
           case 0:
             {
               if(i!=degree)
               {
                 if(a0>0)
                 {
                   cout<<" + ";
                 }//endif
               }//endif
               if(a0!=0)
               {
                  cout<<a0;   
                }//endif
               break;
             }//end case 0
         }//endswitch
     }//endfor
   cout<<endl;
 }//end print
}; //endclass Poly
int main() 
{
    Poly p1,p2,p3;
  cout<<"First Polynomial"<<endl;
    p1.readdegree();
    p1.readcoef();
    p1.print();
  cout<<"Second Polynomial"<<endl;
    p2.readdegree();
    p2.readcoef();
    p2.print();
}
