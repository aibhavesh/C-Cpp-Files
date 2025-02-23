#include<stdio.h>
int factorial(int n)
{if( n==0 || n==1) return 1;//base case ;
else return n*factorial(n-1);
}
int main()
{   int n,fact;
	printf("enter value of factorial");
	scanf("%d",&n);
	fact=factorial(n);
	printf("%d",fact);	
}
