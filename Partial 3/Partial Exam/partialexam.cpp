#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
class Matrix {
public:
  int row, col;
  int mat[100][100] = {0};
  void readrow() {
    do {
      cout << "how many rows(1-100) ";
      cin >> row;
    } while ((row < 1) || (row > 100));
  } // end readcol;
  void readcol() {
    do {
      cout << "how many columns (1-100) ";
      cin >> col;
    } while ((col < 1) || (col > 100));
  } // end readcol;
  void print() {
    int i, j;
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= col; j++) {
        printf("%4d", mat[i][j]);
      } // endfor j
      cout << endl;
    } // endfor i
  }   // end print
  void fill() {
    int i, j;
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= col; j++) {
        mat[i][j] = rand() % 100 + 1;
      }
    }
  } // en fill
  void checkRepeated()
{
     int i,j,contador=0,num, x, y,checkR[row][col];
     cout<<"Los numeros repetidos son:"<<endl;
     for(i=1;i<row;i++) 
    {
       for(j=1; j<col;j++) 
        {
          contador=1;
          num=mat[i][j];
          if(checkR[i][j]!=1) 
          {
                for(x=1;x<row;x++) 
                {
                    for(y=1;y<col;y++) 
                    {
                        if((i==x)&&(j==y)) 
                        {
                            break;
                        }
                                if(mat[i][j]==mat[x][y]) 
                            {
                                checkR[x][y]=1;
                                contador++;
                            }
                    }
                }
                    if (contador>1)
                    {
                    
                    cout<<num<<" se repite "<<contador<<" veces"<<endl;
                    }
          }
        }
    }
}
};  // endclass

int main() {
  srand(time(NULL));
  Matrix m;

  m.readrow();
  m.readcol();
  m.fill();
  m.print();
  m.checkRepeated();
  return 0;
}
