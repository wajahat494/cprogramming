#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void traversealinkedlist(struct Node* ptr){
    while(ptr!=NULL){
    printf("element:%d\n",ptr->data);
    ptr=ptr->next;
    }
}
int main(){
    struct Node* head=(struct Node*) malloc(sizeof(struct Node));
    struct Node* second=(struct Node*) malloc(sizeof(struct Node));
    struct Node* third=(struct Node*) malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=9;
    third->next=fourth;
    fourth->data=6;
    fourth->next=NULL;
    traversealinkedlist(head);





    return 0;
}