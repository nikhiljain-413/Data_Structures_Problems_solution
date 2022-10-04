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

class tree{
    public:
    int indx;
    tree(){
        this->indx = -1;
    }
    // int indx=-1;
    node* built_tree(int arr[]){
        indx++;   
        if(arr[indx] == -1){
            return NULL;
        }
        node* newnode =new node(arr[indx]);
        newnode->left = built_tree(arr );
        newnode->right = built_tree(arr );
        return newnode;
    }
};


//finding diameter
int solve(node* root, int &res){
    if(root == NULL){
        return 0;
    }

    int l = solve(root->left,res);
    int r = solve(root->right,res);

    int temp = max(l,r) + 1;
    int ans = max(temp, l+r+1);
    
    res = max(res,ans);

    return temp;
}
int main()
{
    int arr[] = {1,2,5,6,7,-1,-1,8,-1,-1,9,-1,-1,3,4,-1,-1,-1,-1};
    tree t1;
    node* root = t1.built_tree(arr);
    cout<<root->data<<endl;
    int res = INT_MIN;
    solve(root, res);
    cout<<res<<endl;

    return 0;
}