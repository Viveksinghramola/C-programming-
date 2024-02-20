#include <stdio.h>
int sum (int );
int main ()
{
int arr[20],n,i,res;
printf ("input the limit of array ");
scanf ("%d",&n);
printf ("enter the elements ");
for (i=0;i<n;i++)
{
scanf ("%d",&arr[i]);
}
for (i=0;i<n;i++)
{
res = sum (arr[i]);
printf ("%d",res);
}
return 0;
}

int sum (int n)
{
int s=0;
while (n!=0)
{
s= s+ n%10;
n=n/10;
}
return s;
}
