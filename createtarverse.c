#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void traverse(struct Node* ptr){
    while(ptr!=0){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
//insert at begining
struct Node* begining(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
    
    //insert in between
    struct Node* between(struct Node* head,int data,int index){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while(i!=index-1){
     
    p=p->next;
     i++;
     }
     ptr->data=data;
     ptr->next=p->next;
     p->next=ptr;
     return head;

    }
int main(){
struct Node* head=(struct Node*)malloc(sizeof(struct Node));
struct Node* second=(struct Node*)malloc(sizeof(struct Node));
struct Node* third=(struct Node*)malloc(sizeof(struct Node));
head->data=7;
head->next=second;
second->data=5;
second->next=third;
third->data=8;
third->next=NULL;
traverse(head);
head=begining(head,78);
printf("\n");
traverse(head);
head=between(head,4,2);
traverse(head);
}
