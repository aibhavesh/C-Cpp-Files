#include<stdio.h>
#define maxsize 10

void push();
void pop();
void display();

int stack[maxsize] ,top=-1;
int main()
{
	int ch;
	do
	{
		printf("---------stack----------");
		printf("\npress 1 for push operation");
		printf("\npress 2 for pop opertaion");
		printf("\npress 3 for display all the element");
		printf("\npress 4 for exit ");
		printf("\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : push();
			break;
			case 2 : pop();
			break;
			case 3: display();
			break;
			case 4: break;
			default : printf("invalid choice");
		}
   }
	while(ch!=4);
}
void push()
 {
 	if(top==maxsize)
 	{
 		printf("\n stack overflow");
	}
	else
	{
		top++;
		printf("enter the value :");
		scanf("%d",&stack[top]);
	}
}
void pop()
 {
 	if(top==-1)
 	{
 		printf("\nstack underflow");
	 }
	else
	{
		printf("delete data %d",stack[top]);
		top--;
        	
	}
}
void display()
 { int i;
 	if (top==-1)
 	{
 		printf("stack underflow");
	 }
	 else
	 {  
	 printf("\n");
	for(i=0;i<=top;i++)
    {
		printf("\n%d",stack[i]);
	}	
	printf("\n");
    }
}
