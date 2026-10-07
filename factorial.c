#include<stdio.h>
int main()
{
int i,n,f;
printf("enter value for n:");
scanf ("%d",&n);
if (n<0)
    {printf("no factorial");

}
else {
        f=1;
 for(i=1;i<=n;i++)
 f=f*i;

}
printf("%d",f);
}
