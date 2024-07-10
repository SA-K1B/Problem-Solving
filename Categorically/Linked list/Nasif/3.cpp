#include <bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node *left;
  node* right;
};
node* newnode(int data)
{
  node* temp = new node;
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}
node* insrt(node* root, int data)
{
  node* nw= newnode(data);
  node* x = root;
  node* y = NULL;
  while (x != NULL) {
    y = x;
    if (data < x->data)
      x = x->left;
    else
      x = x->right;
  }
  if (y == NULL)
    y = nw;
  else if (data < y->data)
    y->left = nw;
  else
    y->right = nw;
  return y;
}
node* findMin(node* root)
{
  while(root->left!=NULL)root=root->left;
  return root;
}
struct node* Remove(struct node *root, int data) {
  if(root == NULL) return root;
  else if(data < root->data)
    root->left = Remove(root->left,data);
  else if (data > root->data)
    root->right = Remove(root->right,data);
  else {
    if(root->left == NULL && root->right == NULL) {
      delete root;
      root = NULL;
    }
    else if(root->left == NULL) {
      struct node *temp = root;
      root = root->right;
      delete temp;
    }
    else if(root->right == NULL) {
      struct node *temp = root;
      root = root->left;
      delete temp;
    }
    else {
      struct node *temp = findMin(root->right);
      root->data = temp->data;
      root->right = Remove(root->right,temp->data);
    }
  }
  return root;
}
void in_order(node* root)
{
  if (root == NULL)
    return;
  else {
    in_order(root->left);
    cout << root->data << " ";
    in_order(root->right);
  }
}
int main()
{
  node* root = NULL;
  root = insrt(root, 50);
  insrt(root, 30);
  insrt(root, 20);
  insrt(root, 40);
  insrt(root, 70);
  insrt(root, 60);
  insrt(root, 80);
  in_order(root);
  cout<<endl;
  root=Remove(root,20);
  in_order(root);
  return 0;
}

