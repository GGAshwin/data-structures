#include<stdio.h>
#define MAX 11
int main(){
    int i,*ptr;//declaring pointer
    ptr=calloc(10,sizeof(int));//Dynamic Memory Allocation using 'calloc'
    for(int i=0;i<MAX;i++){
        *(ptr+i)=i;
    }
    for(int i=0;i<MAX;i++)
    printf("%d ",*(ptr+i));
    return 0;
}