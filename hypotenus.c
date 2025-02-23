#include<stdio.h>
#include<math.h>
void main()
{
	int b,p,h;
	printf("enter the  value of base");
	scanf("%d",&b);
	printf("enter the value of perpndicular");
	scanf("%d",&p);
	h=sqrt(p*p+b*b);
	printf("the hypotenus of the triangle is %d",h);
	return 0;
}
