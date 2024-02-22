#include<stdio.h>
#define MAX 20
void frequency(int[][20],int,int);

int main()
{
     int a[MAX][MAX],n,n2,i,j;
     printf("Enter row and column sizes of array: ");//row and column sizes
     scanf("%d%d",&n, &n2);
     printf("\nEnter array: ");
     for(i=0;i<n;i++)
     {
       for(j=0;j<n2;j++) 
       {
          scanf("%d",&a[i][j]);
       }
     }
     frequency(a,n,n2);
     return(0);
}
void frequency(int a[][20],int n, int n2) {
     int i,j,k,c=0,num;
     int x, y,visited[n][n2];
     for(i=0;i<n;i++) {
       for(j=0; j<n2;j++) {
          c=1;
          num=a[i][j];
          if(visited[i][j]!=1) {
          for(x=0;x<n;x++) {
            for(y=0;y<n2;y++) {
              if((i==x)&&(j==y)) {
                continue;
              }
              if(a[i][j]==a[x][y]) {
                visited[x][y]=1;
                c++;
              }
            }
          }
          printf("\nthe frequency of element %d  is %d",num,c);
          }
       }
     }
}