#include<stdio.h>
int main()
{
	int n,i,b;
	printf("enter the number ");
	scanf("%d",&n);
	for(i=1;i<=n*10;i++)
	{
        b=n*n;
		printf("%d\n",i);
	}
}
