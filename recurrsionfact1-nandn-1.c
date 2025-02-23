#include<stdio.h>
int decreasing(int n)
{if(n==0) return ;
printf("%d\n",n);//base case ;
decreasing(n-1);
}
int increasing(int n)
{if(n==0) return;//base case ;
increasing(n-1);
printf("%d\n",n);
}
int main()
{   int n;
	printf("enter number");
	scanf("%d",&n);
	decreasing(n);
	increasing(n);	
}
