#include<stdio.h>

int getpivot(int arr[],int n){

    int s = 0;
 int end =n-1;
 int mid = s+(end-s)/2;

    while(s<end)
    {
 
       if(arr[mid]>=arr[0])
        {
           s = mid +1;
        } 
  
           else{

            end = mid;
           }

           {
             mid = s+(end-s)/2;
             }
            }
 return s;
 }

 int main()
{
    int arr[] ={3, 8 , 10 ,17 , 1};
    int n = 5;

    int pivot = getpivot( arr,n);
      
    printf("the index = %d\n",pivot);
    printf("the pivot element is %d\n",arr[pivot]);

    return 0;
 }