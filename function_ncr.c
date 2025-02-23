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
    if (r > n) {  
        return 0;  // Combinations are not defined for r > n  
    }  
    return factorial(n) / (factorial(r) * factorial(n - r));  
}  

int main() {  
    int n, r;  
    printf("Enter the value of n and r: ");  
    scanf("%d %d", &n, &r);  
    
    int ncr = combination(n, r);  
    printf("C(%d, %d) = %d\n", n, r, ncr);  
    
    return 0;  
}
