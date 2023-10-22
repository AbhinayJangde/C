#include<stdio.h>
#define PI 3.141592

/* This function takes two args the first is array and second one is length/size of array*/
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}