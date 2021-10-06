#include<stdio.h>
int main()
{
    int arr[10]={1,2,6,7,9},i,pos=2,ele=100;
    for(i=4; i >=pos;i--)
    arr[i+1] = arr[i];
    arr[pos] = ele;
    for(i=0;i<6;i++)
    printf("%d",arr[i]);

    return 0;
}