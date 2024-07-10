#include<stdio.h>
struct node{
    int data;
    struct node* link;
};
struct node* head;
struct node* temp;
struct node* temp1;
struct node* temp2;
struct node* pre;
struct node* temp3;
void print(){
     temp1=head;
     while(temp1!=NULL){
     printf("%d ",temp1->data);
     temp1=temp1->link;
     }
}
void insertagain(int val){
    temp2=head;
    while(temp2!=NULL){
    if(temp2->data>=val){
        if(temp2==head){

    }
        temp3=(struct node*)malloc(sizeof(struct node));
        temp3->data=val;
        pre->link=temp3;
        temp3->link=temp2;
        break;
        }
    else{
        pre=temp2;
        temp2=temp2->link;
    }
  }
}
void insert(int val){
   temp=(struct node*)malloc(sizeof(struct node));
   if(pre!=NULL){
    pre->link=temp;
   }
   pre=temp;
   temp->data=val;
   temp->link=NULL;
   if(head==NULL){
    head=temp;
   }
}
int main()
{
  freopen("i.txt","r",stdin);
  pre=NULL;
  head=NULL;
  int n,i,nd;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&nd);
    insert(nd);
  }
    print();
    printf("\n");
    scanf("%d",&nd);
    insertagain(nd);
    print();
    return 0;
}
