#include<stdio.h>
#define MAX 100
int arr[MAX];
int main(){
    for(int i=0;i<10;i++)
    arr[i]=i;
    for(int i=0;i<10;i++)
    printf("%d",arr[i]);
    return 0;
}