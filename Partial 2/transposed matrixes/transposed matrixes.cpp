#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

class Marzo16
{
  public:
  int n1,n2;
  
  int m[5][5]={0};
  void uno()
{
  int i,j;
  for(i=1;i<=n1;i++)
    {
      for(j=1;j<=n2;j++)
        {
          m[i][j]=rand()%9+1;
        }
    }
}//end uno





void dos()
{
  int i,j;
  for(i=1;i<=n1;i++)
    {
      for(j=1;j<=n2;j++)
        {
          cout<<m[i][j]<<" ";
        }
      cout<< endl;
    }
  cout<<endl;
}//end dos
};//end class
void tres(Marzo16 &m1,Marzo16 &m2)
{
  int i,j;
  m2.n1=m1.n2;
  m2.n2=m1.n1;
  for(i=1;i<=m1.n1;i++)
    {
      for(j=1;j<=m1.n2;j++)
        {
          m2.m[j][i]=m1.m[i][j];
        }
    }
}//end tres



int main()
{
  srand(time(NULL));
  Marzo16 m1,m2;
  m1.n1=3;
  m1.n2=4;
  m1.uno();
  m1.dos();
  tres(m1,m2);
  m2.dos();
}
