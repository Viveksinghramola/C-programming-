#include <stdio.h>
void sort (int [],int);
int main ()
{
   int arr[20],n,i;
   printf ("input the limit of array ");
   scanf ("%d",&n);
   printf ("enter the elements ");
   for (i=0;i<n;i++)
   {
       scanf ("%d",&arr[i]);
   }
   sort (arr,n );
   return 0;
}

void sort (int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
      
        }
    }
    
     for ( int i=0;i<n;i++)
     {
       printf ("%d",arr[i]);
     }
return;
}