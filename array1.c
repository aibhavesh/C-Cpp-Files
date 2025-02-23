#include<stdio.h>

int main() {
    int marks[10];  // Declare an array to store marks of 10 students
    int i;

    // Input marks
    for(i = 0; i < 10; i++) {  // Loop should iterate from 0 to 9
        printf("Enter marks for student %d: ", i+1);  // Prompt user for input
        scanf("%d", &marks[i]);  // Read marks and store in array
    }

    // Check for marks less than 35
    printf("Indices of students with marks less than 35:\n");
    for(i = 0; i < 10; i++) {  // Loop should iterate from 0 to 9
        if(marks[i] < 35) {  // Check if marks are less than 35
            printf("%d ", i);  // Print the index of the student
        }
    }

    return 0;  // End of program
}
dddd
