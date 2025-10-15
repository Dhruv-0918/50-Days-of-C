#include<stdio.h>
int main(){

//    program to reverse an array!!

    int a[10];
    int i;
    
    for(i=0;i<10;i++){
        printf("Enter elements of array : \n");
        scanf("%d",&a[i]);
    }
    //       reverse of the array

    for(i=9;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}