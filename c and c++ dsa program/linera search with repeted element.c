// Online C compiler to run C program online
#include <stdio.h>

int main() {
          //      0 1   2  3  4   5  6  7  8 9 
    int arr[] = {10,40 ,60,80,20,69,90,80,44,80,80},i, n,f=0;
       //10
    printf("enter the element you want to search : ");
    scanf("%d",&n);
    for(i=0;i<12;i++)
    {
        if (arr[i]==n)
        {
            printf("\nthe value is found at index  %d th",i);
            f++;
        }  
        else 
        {
            continue;
        }
    }
    
printf("\n the number appears %d times",f);
    
    return 0;
}
