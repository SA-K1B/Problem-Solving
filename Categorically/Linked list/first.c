#include<stdio.h>
struct node{
    int data;
    struct node* link;
};
struct node* head;
struct node* temp;
struct node* pre;
void print(){
   temp=head;
   while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->link;
   }
}
void insert(int val){
     temp=(struct node*)malloc(sizeof(struct node));
     if(pre!=NULL){
        pre->link=temp;
     }
     temp->data=val;
     temp->link=NULL;
     pre=temp;
     if(head==NULL){
        head=temp;
     }
}
int main()
{
    pre=NULL;
    head=NULL;
    insert(3);
    insert(2);
    insert(5);
    print();
}
