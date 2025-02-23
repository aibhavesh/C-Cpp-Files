#include <stdio.h>  

int factorial(int x) {  
    int i;  
    int fact = 1;  
    for (i = 2; i <= x; i++) {  
        fact = fact * i;  
    }  
    return fact;  
}  

int combination(int n, int r) {    
    if (n==r || r==0) 
	return 1;
    else
    return factorial(n) / (factorial(r) * factorial(n - r));  
}  

int main() {  
    int n, r, i, nsp,j;  
    printf("Enter the value of n: ");  
    scanf("%d", &n);  

    nsp = n;  // Initialize nsp to number of spaces to print  
    
    for (r = 0; r <= n; r++) {  
        // Print leading spaces  
        for ( j = nsp; j > 0; j--) {  
            printf(" ");  
        }  
        nsp--;  // Decrease nsp after printing the spaces for each line  

        // Print the coefficients  
        for (i = 0; i <= r; i++) {  
            int icj = combination(r, i);  
            printf("%d ", icj);  
        }  
        printf("\n");  // Move to the next line  
    }  

    return 0;  
}
