#include<stdio.h>
int main()
{ int a[5],i,n,f=0,location=0;
printf("enter the array elements");


   
   for(i=0;i<5;i++)
   scanf("%d",&a[i]);
   printf("enter the elements to find ");
   scanf("%d",&n);
for(i=0;i<5;i++)
if(a[i]==n)
{ f=1;
 location=i;
}
 if(f==1)
 printf("the element is found%d%d\n\n",location,n);
 else
 printf("the elements is not found%d%d\n",location,n);
return 0;
}