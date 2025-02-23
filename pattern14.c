#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("enter rows");
	scanf("%d",&a);
	for( i=1 ;i<=a;i++ )//for no of rows
	{
		for(j=1;j<=a;j++)
		{
		b=a/2 +1;
		if(i==b|| j==b)
		{
			printf("*");
		}	
		else
		{
			printf(" ");
		}
		}
		printf("\n");
	}
	return 0 ;
}
