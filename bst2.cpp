#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        left=right=NULL;
    }
};
node* buildbstfromsorted(vector<int>arr,int st,int end){
    if (st>end)
    {
        return NULL;
    }
    int mid=st+(end-st)/2;
    node* curr=new node(arr[mid]); 
    curr->left=buildbstfromsorted(arr,st,mid-1);
    curr->right=buildbstfromsorted(arr,mid+1,end);
    return curr; 
}
void preorder(node* root){
    if (root==NULL)
    {
       return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//convert bst to balanced bst
void getinorder(node* root,vector<int>&nodes){
    if (root==NULL)
    {
       return;
    }
    getinorder(root->left,nodes);
    nodes.push_back(root->data);
    getinorder(root->right,nodes);
}
node* balancebst(node* root){
    vector<int>nodes;
    getinorder(root,nodes);
    return buildbstfromsorted(nodes,0,nodes.size()-1);
}
int main(){
   int arr[7]={3,4,5,6,7,8,9};
    node* root=new node(6);
    root->left=new node(5);
    root->left->left=new node(4);
    root->left->left->left=new node(3);

    root->right=new node(7);
    root->right->right=new node(8);
    root->right->right->right=new node(9);
    root=balancebst(root);
    preorder(root);
    cout<<endl;
}