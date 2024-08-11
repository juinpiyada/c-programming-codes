#include<stdio.h>
int main()
{int n,i,s1=0,s2=1,s3;
printf("enter the range");
scanf("%d",&n);
printf("%d",s1);
printf("%d",s2);
for(i=2;i<=n;i++)
{ s3=s1+s2;
for(i=2;i<=n;i++)
printf("%d",i);
s1=s2;
s2=s3;

}

}
