#include<stdio.h>
int main()
{
	int x;
	printf("enter the year you wnat to check");
	scanf("%d",&x);
	if(x%400==0)
    printf("%d is a leap year",x);
    else if(x%100==0)
     printf("%d is a leap year",x);
    else if(x%4==0)
     printf("%d is a leap year",x);
    else
     printf("%d is not a leap year",x);
    printf("thank you");
	    return 0;
}
