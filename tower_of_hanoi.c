#include<stdio.h>

// Tower of Hanoi function
// n: Number of disks
// s: Source rod
// h: Helper rod
// d: Destination rod
int toh(int n, char s, char h, char d) {
    // Base case: If no disks, return
    if (n == 0) return;
    
    // Move n-1 disks from source to helper using destination as intermediate
    toh(n-1, s, d, h);
    
    // Move the nth disk from source to destination
    printf("%c -> %c \n", s, d);
    
    // Move n-1 disks from helper to destination using source as intermediate
    toh(n-1, h, s, d);
    
    return;  // Return statement at the end of function
}

int main() { 
    int n;
    printf("Enter the number of disks: ");  // Prompt user for number of disks
    scanf("%d", &n);  // Read the number of disks
    
    int z = toh(n, 'a', 'b', 'c');  // Call the Tower of Hanoi function
    printf("The moves are: %d", z);  // Print the number of moves (though this function does not return anything)
    
    return 0;  // End of main function
}

