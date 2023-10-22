#include<stdio.h>
#include<stdlib.h>
#include "./../main.h"
/* 
    Time Complexity = O(n)
*/
void reverseArray(int arr[], int lenght){
    for (int i = 0, j=lenght-1; i<j; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
}
int main(int argc, char *argv[]){
    int arr[] = {4,9,10,3,7,90};
    int length = sizeof(arr)/sizeof(int);
    printArray(arr, length);
    reverseArray(arr, length);
    printArray(arr, length);


    return 0;
}