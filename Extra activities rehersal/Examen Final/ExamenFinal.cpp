#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
class Matrix {
public:
  int row, col;
  int mat[101][101] = {0};
  int matT[101][101] = {0};
  int matR[101][101] = {0};
  void readrow() {
    do {
      cout << "Size of your squared matrix?(1-100) ";
      cin >> row;
    } while ((row < 1) || (row > 100));
  } // end readcol;
  void readcol() {
    //do {
      //cout << "how many columns (1-100) ";
      //cin >> col;
      col=row;
    //} while ((col < 1) || (col > 100));
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
  } // end fill

  void transpuesta(){
      cout << " Transpose Matrix "<<endl;

          for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            matT[i][j]=mat[j][i];
        }
    }
    
    

    for (int i = 1; i <= col; i++){
        for (int j = 1; j <= col; j++)
        {
            cout<<matT[i][j]<<" ";
        }
        cout<<endl;
  }
  }

    void reversed(){
      cout << " Reversed of transposed matrix "<<endl;
          for (int i = 0; i <= row-0.5; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            matR[i+1][j+1]=matT[row-i][j+1];
        }
    }

    for (int i = 1; i <= col; i++){
        for (int j = 1; j <= col; j++)
        {
            cout<<matR[i][j]<<" ";
        }
        cout<<endl;
  }
    
        cout<<endl;
  }
};  // endclass

int main() {
  srand(time(NULL));
  Matrix m;
  m.readrow();
  m.readcol();
  m.fill();
  m.print();
  //m.transpuesta();
 // m.reversed();

  return 0;
}


