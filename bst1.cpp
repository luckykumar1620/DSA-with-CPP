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
//build bst
node* insert(node* root,int val){
    if (root==NULL)
    {
        root=new node(val);
        return root;
    } 
    if (root->data>val)
    {
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }
    return root;  
}

node*buildBST(int arr[],int n){
    node* root=NULL;
    for (int  i = 0; i < n; i++)
    {
       root=insert(root,arr[i]);
    }
   return root; 
}
void inorder(node* root){
    if (root==NULL)
    { 
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//search in bst
bool search(node* root,int key){
    if (root==NULL)
    {
       return false;
    }
    if (root->data==key)
    {
        return true;
    }else if (root->data>key)
    {
        return search(root->left,key);
    }else{
        return search(root->right,key);
    } 
}

//delete a node
node* getinordersuccessor(node* root){
    while (root->left!=NULL)
    {
       root=root->left;
    }
    return root;
}
node* delnode(node* root,int val){
    if (root=NULL)
    {
        return NULL;
    }
    if (val<root->data)
    {
       root->left=delnode(root->left,val);
    }else if (val>root->data)
    {
       root->right=delnode(root->right,val);
    }else{
        if (root->left==NULL&&root->right==NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left==NULL||root->right==NULL)
        {
           return root->left==NULL?root->right:root->left;
        }
        node* IS=getinordersuccessor(root->right);
        root->data=IS->data;
        root->right=delnode(root->right,IS->data);
        return root;
    }
    return root;  
}

//print in range
void printrange(node* root,int start,int end){
    if (root==NULL)
    {
        return ;
    }
    if (start<=root->data&&root->data<=end)
    {
         printrange(root->left,start,end);
        cout<<root->data<<" ";
        printrange(root->right,start,end);
    }else if (root->data<start)
    {
       printrange(root->right,start,end);
    }else{
        printrange(root->left,start,end);
    }    
}

//roof to leaf path;
void printpath(vector<int>path){
    cout<<"path: ";
    for (int i = 0; i <path.size(); i++)
    {
        cout<<path[i]<<" ";
    }
    cout<<endl;
}
void pathhelper(node* root,vector<int>&path){
    if (root==NULL)
    {
        return;
    }
    path.push_back(root->data);
    if (root->left==NULL&&root->right==NULL)
    {
        printpath(path);
        path.pop_back();
        return;
    }
    pathhelper(root->left,path);
    pathhelper(root->right,path);
    path.pop_back();    
}

void roottoleafpath(node* root){
    vector<int>path;
    pathhelper(root,path);
}

//validate bst
bool validatehelper(node* root,node* min,node* max){
    if (root==NULL)
    {
       return true;
    }
    if (min!=NULL&&root->data<min->data)
    {
        return false;
    }
    if (max!=NULL&&root->data>max->data)
    {
        return false;
    }
    return validatehelper(root->left,min,root)&&
            validatehelper(root->right,root,max);
}

bool validatebst(node* root){
    return validatehelper(root,NULL,NULL);
}
int main(){
    int arr[]={8,5,3,1,4,6,10,11,14};
    //int arr[6]={5,1,3,4,2,7};
    node* root=buildBST(arr,9);
    inorder(root);
    cout<<endl;
    cout<<validatebst(root);
}
