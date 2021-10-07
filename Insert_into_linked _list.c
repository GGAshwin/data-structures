

//Insert and create a Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	structNode *next;
}*first=NULL;
void create(int A[],int n)
{
	int i;
	structNode *t,*last;
	first=(structNode *)malloc(sizeof(structNode));
	first->data=A[0];
	first->next=NULL;   
	last=first;
	for(i=1;i<n;i++)   
	{        
	t=(structNode*)malloc(sizeof(structNode)); 
        t->data=A[i];  
        t->next=NULL;      
  	last->next=t;      
  	last=t;  
	}
}
void Display(structNode *p)
{
while(p!=NULL)    
{
	printf("%d ",p->data);     
   	p=p->next;   
 }
}
void Insert(structNode *p,int index,int x)
{
structNode *t;
int i;
if(index < 0 || index > count(p))
return;    
t=(structNode *)malloc(sizeof(structNode));
    t->data=x;
if(index == 0)   
{       
 t->next=first;first=t;   
}
else    
{
   for(i=0;i<index-1;i++)   
    p=p->next;       
    t->next=p->next;   
    p->next=t;    }
}
int main()
{    
  Insert(first,0,15);     
  Insert(first,0,8);    

  Insert(first,0,9);   
  Insert(first,1,10);   
  Display(first);
  return0;
}