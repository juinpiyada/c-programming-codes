#include<stdio.h>
void main()
{ 
    int n,a[100],i,e;
    printf("Enter the range of the loop: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n+1;i++)
    {a[i]=a[i+1];
    } 
    
    n--;
    for(i=0;i<n;i++)
    printf("%d" " ",a[i]);   
}