
#include<stdio.h>
int main(){
    int arr[7];
    

    // Day 01 - find maximum and minimum element in the array

    //initialize elements of array

     printf("Enter value of array:");
    for(int i=0;i<7;i++){

     
       scanf("%d",&arr[i]);
    }

    //for Maximum element of array
     int max=arr[0];
    for(int i=0;i<7;i++){
        if(arr[i]>max){
            max=arr[i];
        }
       
    }
     printf("Maximum element is : %d",max);

     //for minimum element of array

     int min=arr[0];
     for(int i=0;i<7;i++){
        if(arr[i]<min){
         min=arr[i];
        }
       
     }
      printf("Minimum element is : %d",min);

      return 0;

    
}