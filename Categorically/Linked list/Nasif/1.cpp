#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node* next;
   node* prev;
};
node* head=NULL;
void insrt_back(int x){
    struct node* temp = new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    struct node* ptr=head;
    while((ptr->next)!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}
void display() {
   struct node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insrt_back(3);
   insrt_back(1);
   insrt_back(7);
   insrt_back(2);
   insrt_back(9);
   cout<<"The linked list is: ";
   display();
   return 0;
}
