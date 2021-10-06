#include<stdio.h>
int main()
{
    int n,pos,ele;
    printf("Enter Number of Elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Position of element to be inserted:\n");
    scanf("%d",&pos);
    if(pos>n || pos<0){
        printf("Enter Valid position...!!!!!\n");
    }
    else{
        printf("Enter element to be inserted:\n");
        scanf("%d",&ele);
        for(int i=pos;i<n;i++){
            arr[i+1]=arr[i];
        }
        arr[pos] = ele;
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
