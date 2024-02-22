#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Poly 
{
public:
int degree = 0; 
int a0 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;

void readDegree()
    {
    do
        {
            cout << "degree? (0-5)" <<endl;
            cin >> degree;
        
        }   while ((degree < 0) || (degree > 5));
    }//endDegree

void readCoef()
    {
        int i;
        for (i = 0; i <= degree; i++)
            {
                switch (i)
                {
                    case 0: 
                    {
                       cout << "a0 = ?"; <<endl;
                       cin >> a0;
                       if((i==degree)&&(a0==0))

                            {
                            cout<<"the coefficient cannot be zero"<<endl; //poner esto en todas
                            }
                       break; 
                    }
                    case 1: 
                    {
                       cout << "a1 = ?"; <<endl;
                       cin >> a1;
                       break; 
                    }
                    case 2: 
                    {
                       cout << "a2 = ?"; <<endl;
                       cin >> a2;
                       break; 
                    }
                    case 3: 
                    {
                       cout << "a3 = ?"; <<endl;
                       cin >> a3;
                       break; 
                    }
                    case 4: 
                    {
                       cout << "a4 = ?"; <<endl;
                       cin >> a4;
                       break; 
                    }
                    case 5: 
                    {
                       cout << "a5 = ?"; <<endl;
                       cin >> a5;
                       break; 
                    }

                }//endSwitch
            }//endFor
    }//end readCoef

    void print()
    {
        int i;
        for (i = degree; i >= 0; i--)
        {
            switch (i)
            {
                case 5:
                {
                    if (i != degree)
                    {
                        if (a5>0)
                        {
                            cout << " + ";
                        } // endIf
                    } //endIf
                    if (a5 =! 0)
                    {
                        if (a5 ==1)
                        {
                            cout<< "x^5";

                        }
                        else
                        {
                            if (a5 == (-1))
                            {
                                cout<< "-x ^ 5";
                            }
                            else
                            {
                                cout<<a5<<"x^5";
                            }//endif
                        }//endIf
                    }//endIf
            
                    break;
                }//end case 5

             case 4:
                {
                    if (i != degree)
                    {
                        if (a4>0)
                        {
                            cout << " + ";
                        } // endIf
                    } //endIf
                    if (a4 =! 0)
                    {
                        if (a4==1)
                        {
                            cout<< "x^4";

                        }
                        else
                        {
                            if (a4 == (-1))
                            {
                                cout<< "-x ^ 4";
                            }
                            else
                            {
                                cout<<a4<<"x^4";
                            }//endif
                        }//endIf
                    }//endIf
                    break;
                }//end case 4
                case 3:
                {
                    if (i != degree)
                    {
                        if (a3>0)
                        {
                            cout << " + ";
                        } // endIf
                    } //endIf
                    if (a3 =! 0)
                    {
                        if (a3 ==1)
                        {
                            cout<< "x^3";

                        }
                        else
                        {
                            if (a3 == (-1))
                            {
                                cout<< "-x ^ 3";
                            }
                            else
                            {
                                cout<<a3<<"x^3";
                            }//endif
                        }//endIf
                    }//endIf
            
                    break;
                }//end case 3
                case 2:
                {
                    if (i != degree)
                    {
                        if (a2>0)
                        {
                            cout << " + ";
                        } // endIf
                    } //endIf
                    if (a2 =! 0)
                    {
                        if (a2 ==1)
                        {
                            cout<< "x^2";

                        }
                        else
                        {
                            if (a2 == (-1))
                            {
                                cout<< "-x ^ 2";
                            }
                            else
                            {
                                cout<<a2<<"x^2";
                            }//endif
                        }//endIf
                    }//endIf
                    break;
                }//end case 2
                case 1:
                {
                    if (i != degree)
                    {
                        if (a1>0)
                        {
                            cout << " + ";
                        } // endIf
                    } //endIf
                    if (a1 =! 0)
                    {
                        if (a5 ==1)
                        {
                            cout<< "x";

                        }
                        else
                        {
                            if (a1 == (-1))
                            {
                                cout<< "-x";
                            }
                            else
                            {
                                cout<<a1<<"x";
                            }//endif
                        }//endIf
                    }//endIf
                    break;
                }//end case 1
                case 0:
                {
                    if (i != degree)
                    {
                        if (a0>0)
                        {
                            cout <<"+";
                        } // endIf
                    } //endIf
                    if (a0 =! 0)
                        {
                            cout<<a0;

                        }//endif
                    break;
                }//endCase0
            }//endSwitch
        }//endFor
    


}; //endClass

int main(){
    cout << "no problem";
    return 0;
}