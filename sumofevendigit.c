#include <stdio.h>

int main() {
    int c, a, b = 0;
    printf("Enter a value: ");
    scanf("%d", &a);

    while (a != 0) {
        c = a % 10; // Get the last digit
        if (c % 2 == 0) { // Check if the digit is even
            b += c; // Add to sum if even
        }
        a /= 10; // Remove the last digit
    }

    printf("The sum of even digits is %d\n", b);
    return 0;
}

