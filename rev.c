#include<stdio.h>
void reversearray(int arr[],int n)
{
    int start = 0;
    int end = n-1;

    while(start<end);
    {
     int temp = arr[start];
     arr[start]= arr[end];
     arr[end]= temp;

     start++;
     end--;
    }
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int n =5;

    reversearray(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d" , arr[i]);

    }
    return 0;
}