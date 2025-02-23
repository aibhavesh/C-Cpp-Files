#include<stdio.h>
int sum(int n,int s)
{
	if(n==0) {
		printf("%d",s);
		return;
		    }
	sum(n-1,s+n);
	return;
}
int main()
{
	int n,s=0;
	printf("enter number");
	scanf("%d",&n);
	sum(n,s);
}
