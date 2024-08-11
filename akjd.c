#include<stdio.h>
int main()
{ int a[100],i,n;
 printf("Enter the range of array :");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("printing the array:");
 for(i=0;i<n;i++)
 printf("%d",&a[i]);
 return(0);
}