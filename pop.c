#include<stdio.h>
 
int max(int arr[],int n)
{
    int max = arr[0];

    for( int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];

        }
    }
    return max;
}    
     
     
int main ()
{
    int arr[]={3,4,6,7,1};
    int n=5;

    printf("max = %d",max(arr,n));

    return 0;
}    
`