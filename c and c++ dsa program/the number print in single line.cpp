// Online C compiler to run C program online
#include <stdio.h>

int main() {
          int n ,i,temp,r=0 ,a , length=0;
          printf("enter the element : ");
    scanf("%d",&n);
    while (n != 0) {//length of number 
        temp=n%10;
         r=r*10+temp;
         n/= 10;
        length++;
    }
    printf("the lenght of number is : %d",length);
    printf("\nthe number is now : %d",r);
    for (i=0;i<length;i++)
    {   a=r%10;
        printf("\n the number is : %d",a);
        r/=10;
    }
    return 0;
}
