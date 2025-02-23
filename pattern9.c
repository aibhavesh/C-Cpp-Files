#include <stdio.h>  

int main() {  
    int n,i,j,a,m; // Total number of rows  
    printf("Enter the number of rows: ");  
    scanf("%d", &n); 
	 printf("Enter the number of rows: ");  
    scanf("%d", &m); 

    // Loop through each row  
    for (i = 1; i<=m; i++) 
	{  
       for( j=1;j<=n;j++)
       { 
       	if(i==1 || i==n || j==1 || j==m)
       	{
       		printf("*");
		 }
	    	else
		 {
			printf(" ");
		 }
	    }
        printf("\n"); // Move to the next line after each row  
    }  

    return 0; // Indicate successful completion  
}  
