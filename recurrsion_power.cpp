#include <stdio.h>  

int power(int b, int p) {  
    if (p == 0) return 1; // Fixed the base case for power  
    int c = b * power(b, p - 1);  
    return c;  
}  

int main() {  
    int c;  
    int b, p;  
    printf("Enter base and power: "); // Added a space for clarity  
    scanf("%d %d", &b, &p);  
    c = power(b, p);  
    printf("%d\n", c); // Added a newline for better output formatting  
    return 0;  
} 
