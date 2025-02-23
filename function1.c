#include<stdio.h>
void england() // function england with returntype void
{
	printf("you are in england\n");
	return;
}
void australia()//function australia with returntype void
{
	printf("you are in australia\n");
	england();//calling england func
	return;
}
void india()
{
	printf("you are in india\n");
	australia();
	return;
}
int main()
{
	india();
	return 0;
}

