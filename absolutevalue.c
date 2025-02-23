#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the number");
	scanf("%d",&x);
	if(x<0){
	y=x*(-1);
	printf("absolute value of bhavesh integer %d is %d ",x,y);
}else 
printf("absolute value of integer %d is %d ",x,x);
	return 0;
}
