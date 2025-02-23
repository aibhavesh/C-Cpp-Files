#include <stdio.h>  

int main() {  
    int i, j, n, min;  

    printf("Enter number of rows: ");  
    scanf("%d", &n);  

    // Loop through each row  
    for(i = 1; i <= 2*n-1; i++) {  
        // Loop through each column  
        for(j = 1; j <= 2*n-1; j++) {  
            // Calculate effective row index in the symmetric range  
            int a = i > n ? 2*n - i : i;  
            // Calculate effective column index in the symmetric range  
            int b = j > n ? 2*n - j : j;  
        

            // Store the minimum value of the adjusted row index and column index  
            min = (a < b) ? a : b;   
            
            // Print the minimum value followed by space for better visibility  
            printf("%d ", n+1-min);  
        }  
        // Move to the next line after finishing a row  
        printf("\n");  
    }  

    return 0;  
}
