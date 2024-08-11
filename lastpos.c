#include<stdio.h>
void main()
{ 
    int n,a[100],i,e;
    printf("Enter the range of the loop: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the eleemtn you want to ");
    scanf("%d",&e);
   
    a[n]=e;
    n++;
    for(i=0;i<n;i++)
    printf("%d" " ",a[i]);   
}