#include<stdio.h>
int stair(int n)
{
	if(n<=3) return n;
	return stair(n-1) + stair(n-2) + stair(3);// here you can take only single and double not more than them 
}
int main()
{
	int n;
	printf("enter no of stairs");
	scanf("%d",&n);
	int ways=stair(n);
	printf("total ways are %d",ways);
	return 0;
}
