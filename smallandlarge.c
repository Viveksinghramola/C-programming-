#include <stdio.h>
void s (int [],int );
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
s (arr,n);
return 0;
}

void s (int arr[] ,int n)
{
int big, small,i;
big = arr[0];
small = arr[0];
for (i=1;i<n;i++)
{
if (big <arr[i])
big = arr[i];
if (small >arr[i])
small = arr[i];
}
printf ("biggest = %d smallest = %d",max,min);
}
