#include<stdio.h>
int main()
{       //   0  1  2  3   4   5     6    7
  int arr[]={5,16,15 ,20 , 21 , 70 , 88 ,100},i,j, n;
 printf("enter the element you want to search and delete : ");
    scanf("%d",&n);
    for(i=0;i<8;i++)
    {
        if (arr[i]==n)
        {   //5=70    6=88
            while(i!=8)
            {
            arr[i]=arr[i+1];
            i++;
            }
        }
    }
   
    for (j=0;j<i-2;j++)
    {
        printf("\narray element %d %d",j+1,arr[j]);
    }
    
    return 0;
}
