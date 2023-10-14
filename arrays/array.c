#include<stdio.h>
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}
/*
 Call by value (copy) it not change in orignal array
*/
void change(int arr[]){
    arr[0]= 1;
}
int main(int argc, char *argv[]){
    int arr[] = {12,3,4,68,22,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    change(arr);
    printf("%d \n", arr[0]);
    printArray(arr,size);
    return 0;
}