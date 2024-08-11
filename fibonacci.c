#include<stdio.h>
int main()
{ int i,s1=0,s2=1,s3,n;
printf("Enter the range");
scanf("%d",&n);
printf("%d",s1);
printf("%d",s2);
for(i=2;i<=n;i++)
{s3=s1+s2;
printf("%d",s3);
s1=s2;
s2=s3;
return 0;
}
}