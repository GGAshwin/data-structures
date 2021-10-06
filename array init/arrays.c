#include<stdio.h>
int arr[100];
int main(){
    for(int i=1;i<=10;i+=3)
    arr[i]=i;
    for(int i=1;i<=10;i++)
    printf("%d",arr[i]);
    return 0;
}