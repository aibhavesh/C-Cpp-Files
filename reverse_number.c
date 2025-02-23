#include<stdio.h>
int number(int n)
{if(n==0) return ;
printf("%d\n",n);//base case ;
number(n-1);
}
int main()
{   int n;
	printf("enter number");
	scanf("%d",&n);
	number(n);	
}
