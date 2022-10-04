#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   struct node *left,*right;
   node(int value){
       this->data = value;
       this->left = NULL;
       this->right = NULL;
   }
};
int main(){
   node *head = NULL;
   for(int i=1;i<11;i++){
    node *newnode = new node(i);
    newnode->right = head;
    head = newnode;
   }
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->right;
    }


}