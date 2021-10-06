#include<stdio.h>
#define MAX 100 //Defining Macro
int arr[MAX];
void Traverse_Array(int *arr){
    for(int i=0;i<MAX;i++){
        arr[i]=i;
    }
}
void Print_Array(int *arr){
    //Printing numbers 0 to 99
    for(int i=0;i<MAX;i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    //Using call by reference
    Traverse_Array(&arr[MAX]);
    Print_Array(&arr[MAX]);
    return 0;
}

