#include<stdio.h>

int maze(int cr, int cc, int er, int ec) {
    int rightways = 0;
    int downways = 0;
    
    // Base case: Reached the end point
    if (cr == er && cc == ec) {
        return 1;
    }
    
    // If reached the last row, can only move right
    if (cr == er) {
        rightways += maze(cr, cc + 1, er, ec);
    }
    
    // If reached the last column, can only move down
    if (cc == ec) {
        downways += maze(cr + 1, cc, er, ec);
    }
    
    // Otherwise, can move either right or down
    if (cr < er && cc < ec) {
        rightways += maze(cr, cc + 1, er, ec);  // Move right
        downways += maze(cr + 1, cc, er, ec);  // Move down
    }
    
    int totalways = rightways + downways;
    return totalways;
}

int main() {
    int n, m;
    printf("Enter the row and column: ");
    scanf("%d %d", &n, &m);
    
    int no_of_ways = maze(1, 1, n, m);
    printf("%d\n", no_of_ways);
    
    return 0;
}

