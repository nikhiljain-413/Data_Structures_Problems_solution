#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

struct node{
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

static int indx = -1;
node* built_tree(int arr[]){
    indx++;
    if(arr[indx] == -1){
        return NULL;
    }
    node* newnode = new node(arr[indx]);
    newnode->left = built_tree(arr);
    newnode->right = built_tree(arr);

    return newnode;
}

void print_tree(node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    print_tree(root->left);
    print_tree(root->right);
}

int solve(node* root, int &res){
    if(root == NULL){
        return 0;
    }

    int l = solve(root->left, res);
    int r = solve(root->right, res);

    // int temp = max(l,r)>0?max(l,r) + root.data : root.data;
    int temp = max(l,r) + root->data;
    int ans = max(temp, l+r+root->data);

    res = max(res,ans);

    return temp;
}
int main()
{
    
    // int arr[] = {1,2,3,-1,-1,4,-1,-1,5,6,7,-1,-1,8,-1,-1,9,-1,-1};


    node* root = built_tree(arr);
    cout<<root->data<<endl;
    print_tree(root);
    cout<<endl;
    int res = INT_MIN;
    cout<<solve(root,res)<<endl;
    cout<<res<<endl;
}