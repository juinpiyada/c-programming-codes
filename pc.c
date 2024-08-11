#include<stdio.h>
int main()
{ int i,s=1,s1=0,n;
printf("Enter the range\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ s=s*i;
s1=s1+s;
}
printf("the seriese is %d",s1);
}