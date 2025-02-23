#include<stdio.h>
int min(int a,int b)
{
	int min;
	if(a<b) return a;
	else return b;
}
int gcd(int a,int b)
{
	int hcf=0,i;
	for(i=1;i<=min(a,b);i++)
	{
		if(a%i==0 || b%i==0)
		{
			hcf=i;
			printf(" %d ",i);
		}
	}
	return hcf;
}
int main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	int hcf=gcd(a,b);
	printf("the hcf of %d and %d is %d.",a,b,hcf);
	
}
