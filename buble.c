#include<stdio.h>
int main()
{ int a[5],i,j,t;
printf("enter the array elemtns ");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
for(j=0;j<4;j++)
if(a[j]>a[i])
{ t=a[j];
a[j]=a[i];
a[i]=t;
}
for(i=0;i<5;i++)
printf("%d",a[i]);
return 0;}