#include <stdio.h>  

int main() {  
    int rows,i,j,k=1,m,a; // You can change this value to adjust the number of rows  
    printf("enter the rows");
    scanf("%d",&rows);
    for( i = 1; i <= rows; i++) {  
        // Print leading spaces  
        for( j = 1; j <= rows - i; j++) {  
            printf(" ");  
        }  
        // Print stars  5
        a=a-1;
        for(j=1;j<=i;j++)
        {
        	printf("%d",j);	
		}
		for(k=1;k<=i-1;k++)
		{
			printf("%d",a);
			a--;
		}
		
        // Move to the next line after each row  
        printf("\n");  
    }  

    return 0;  
}
