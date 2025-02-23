#include<stdio.h>
int main()
{
int n,i,j,k,nsp,nst,m,a;
	printf("enter rows");
	scanf("%d",&n);
	m=2*n+1;
	nsp=1;
	nst=n;
	for(k=1;k<=m;k++)// print the first 7 number of pattern 
	{  printf("%d",k);
	}
	printf("\n");
	for( i=1 ;i<=n;i++ )//n rows
	{    a=1;
		for(j=1;j<=nst;j++)//n stars 
		{
			printf("%d",a);
			a++;
		}
		for(k=1;k<=nsp;k++)//n spaces
		{	
		  printf(" ");
		  a++;	
		}
		for(j=1;j<=nst;j++)//n numbers 
		{
			printf("%d",a);
			a++;
		}
		nsp+=2;
		nst--;
		printf("\n");
	}	
	return 0;
}
