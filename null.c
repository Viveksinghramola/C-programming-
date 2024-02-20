#include<stdio.h>
int main ()
{
  int i,j,f=0;
  int a[3][3];
  printf ("enter the element of matrix ");
  for(i=0; i<3; i++)
    for(j=0; j<3; j++)
      scanf("%d",&a[i][j]);

  for (i=0;i<3;i++)
    {
      for (j=0;j<3;j++)
        {
          if (a[i][j]!=0)
        {
         f=1; 
        break;
        }
        }
    }
      if (f==0)
      {
        printf ("matrix is a null matrix ");
      }
      else
      {
        printf ("matrix is not a null matri ");
      }
}
