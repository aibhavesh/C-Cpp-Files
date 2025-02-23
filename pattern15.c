#include<stdio.h>
int main()
{
int n,i,j,k,nsp,nst,m;
	printf("enter rows");
	scanf("%d",&n);
	nsp=1;
	nst=n;
	m=2*n+1;
	for(k=1;k<=m;k++)
	{  printf("*");
	}
	printf("\n");
	for( i=1 ;i<=n;i++ )//n rows
	{
		for(j=1;j<=nst;j++)//n stars 
		{
			printf("*");
		}
		for(k=1;k<=nsp;k++)
		{	
		  printf(" ");	
		}
		for(j=1;j<=nst;j++)
		{
			printf("*");
		}
		nsp+=2;
		nst--;
		printf("\n");
	}	


}
