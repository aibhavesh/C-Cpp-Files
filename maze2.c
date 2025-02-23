#include<stdio.h>

int maze(int n, int m) {
    int right = 0;
    int down = 0;
    
    // Base case: if both n and m are 1
    if (n == 1 && m == 1) {
        return 1;
    }
    
    // If we are in the first row, we can only move right
    if (n == 1) {
        right += maze(n, m - 1);
    }
    
    // If we are in the first column, we can only move down
    if (m == 1) {
        down += maze(n - 1, m);
    }
    
    // If we are not in the first row or column, we can move either right or down
    if (n > 1 && m > 1) {
        down += maze(n - 1, m);
        right += maze(n, m - 1);
    }
    
    int total = right + down;
    return total;
}

int main() {
    int n, m;
    printf("Enter the row and column: ");
    scanf("%d %d", &n, &m);
    
    int z = maze(n, m);
    printf("%d\n", z);
    
    return 0;
}

