#include <iostream>
#include <math.h> 
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

class Matrix
{
  public:
  int row, col;
  int mat[101][101];

  void readSize()
  {
    do{
      cout << "How big do you want the triangle to be? ( N x N ) = ";
      cin >> row;
    }while((row < 1) || (row > 100));
    col=row;
  }


  void pascal()
  {
    int i, j;
 
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            if (i < j)
                mat[i][j] = 0;
            else if (i == j || j == 0)
                mat[i][j] = 1;
            else
                mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
    }
  void printMatrix()
  {
    int i, j;
    for (int i = 0; i <= row-1; i++)
    {
      for (int j = 0; j <= col-1; j++)
      {
        printf("%4d",mat[i][j]);    
      }
      cout << endl;
    }
  }

     
};

 
int main() 
{
    Matrix a;
    a.readSize();
    a.pascal();
    a.printMatrix();

}