#include <stdio.h>  

// Function to swap the values at the addresses pointed to by a and b  
int swap(int* a, int* b) {  
    int temp = *a;  // Store the value of 'a' in a temporary variable 'temp'  
    *a = *b;        // Assign the value of 'b' to 'a'  
    *b = temp;     // Assign the value stored in 'temp' (original 'a') to 'b'  
    return;        // No return value needed as we are swapping by reference  
}  

int main() {  
    int a, b;  // Declare two integer variables 'a' and 'b'  
    printf("Enter the values: "); // Prompt the user to enter the values  
    scanf("%d %d", &a, &b); // Read the values into 'a' and 'b'  

    swap(&a, &b); // Call the swap function, passing the addresses of 'a' and 'b'  

    // Print the values of 'a' and 'b' after swapping  
    printf("The value of a and b after swapping is a = %d and b = %d\n", a, b);  
    return 0; // Return from main function  
}  
