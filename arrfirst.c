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
    for(i=n;i>=0;i--)
    {a[i]=a[i-1];
    } 
    a[0]=e;
    n++;
    for(i=0;i<n;i++)
    printf("%d" " ",a[i]);   
}