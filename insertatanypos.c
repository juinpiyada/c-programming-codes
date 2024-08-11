#include<stdio.h>
void main()
{ 
    int n,a[100],i,e,p;
    printf("Enter the range of the loop: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the eleemtn you want to ");
    scanf("%d",&e);
    printf("Enter the posticon you want to add the data ");
    scanf("%d",&p);
    for(i=n;i>=p;i--)
    {a[i]=a[i-1];
    } 
    a[p]=e;
    n++;
    for(i=0;i<n;i++)
    printf("%d" " ",a[i]);   
}