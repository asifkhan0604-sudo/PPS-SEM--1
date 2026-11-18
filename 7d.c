#include<stdio.h>
int main (void)
{
	int a[5],i,key,s=0;
	printf("enter 5 values :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
		printf("enter searching element");
		scanf("%d",&key);
		for(i=0;i<5;i++)
		{
			if(key==a[i])
			{          s=1;
				break;
			} }
		if(s==1)
		printf("element found at %d",i+1);

		else
		printf("element not found");


}

