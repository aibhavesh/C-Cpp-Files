#include<stdio.h>
int main()
{   int i,j,n,a=1;
	printf("enter the rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  printf("\n");
		for(j=i;j<=n;j++)
		{
			printf("%d",a);
		}
		a++;
	}
}
