#include <stdio.h>  

int main() {  
    int rows,i,j,k=1; // You can change this value to adjust the number of rows  
    printf("enter th e rows");
    scanf("%d",&rows);
    for( i = 1; i <= rows; i++) {  
        // Print leading spaces  
        for( j = 1; j <= rows - i; j++) {  
            printf(" ");  
        }  
        // Print stars  5
        
        for(j=1;j<=k;j++)
        {
        	printf("%d",j);	
		}
		k=k+2;
        // Move to the next line after each row  
        printf("\n");  
    }  

    return 0;  
}
