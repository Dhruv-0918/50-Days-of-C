#include <stdio.h>

int sortedandrotated(int arr[],int n){
    int count=0;
    for(int i=0;i<n-1;i++){
       if(arr[i]>arr[i+1])
        count++;
       }
       if(arr[n-1]>arr[0])
        count++;
        return (count==1);
       }

int main(){
    int arr[]={4,5,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(sortedandrotated(arr,n)){
        printf("array is sorted and rotated\n");
    }
    else{
        printf("array is not sorted and rotated\n");
    }
    return 0;
}