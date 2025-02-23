#include <stdio.h>  

int main() {  
    int n,i,j;
	char ch; // Total number of rows  
    printf("Enter the number of rows: ");  
    scanf("%d", &n);  

    // Loop through each row  
    for ( i = 1; i <= n; i++)
	 {  
        if (i % 2 != 0) { // For odd rows (1st, 3rd, 5th...)  
            // Print numbers  
            for ( j = 1; j <= i; j++) {  
                printf("%d", j);  
            }  
        } else { // For even rows (2nd, 4th, 6th...)  
            // Print letters  
            for ( ch = 'A'; ch < 'A' + i; ch++) {  
                printf("%c", ch);  
            }  
        }  
        printf("\n"); // Move to the next line after each row  
    }  

    return 0; // Indicate successful completion  
}  
