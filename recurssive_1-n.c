#include<stdio.h>
int increasing(int n)
{if(n==0) return;//base case ;
increasing(n-1);
printf("%d\n",n);
}
int main()
{   int n;
	printf("enter number");
	scanf("%d",&n);
	increasing(n);	
}
