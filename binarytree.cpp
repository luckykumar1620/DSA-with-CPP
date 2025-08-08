#include<iostream>
#include<vector>
#include<queue>
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

static int idx=-1;
  node* buildtree(vector<int>nodes){
    idx++;
    if (nodes[idx]==-1)
    {
        return NULL;
    }
    
    node* currnode=new node(nodes[idx]);
    currnode->left=buildtree(nodes);
    currnode->right=buildtree(nodes);

    return currnode;
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

 void inorder(node* root){
    if (root==NULL)
    {
        return;
    }
    
    //left
    inorder(root->left);
    //data
    cout<<root->data<<" ";
    //right;
    inorder(root->right);
 }

void postorder(node* root){
    if (root==NULL)
    {
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelorder(node* root){
    if (root==NULL)
    {
        return;
    }
    queue<node*>Q;
    Q.push(root);
    Q.push(NULL);
    while (!Q.empty())
    {
       node* curr=Q.front();
       Q.pop();
       if (curr==NULL)
       {
        cout<<endl;
        if (Q.empty())
        {
            break;
        }
        Q.push(NULL);
       }else{ cout<<curr->data<<" ";
       if (curr->left!=NULL)
       {
        Q.push(curr->left);
       }
       if (curr->right!=NULL)
       {
        Q.push(curr->right);
       }
       
    }
    }     
}

int height(node* root){
    if (root==NULL)
    {
        return 0;
    }
    
    int leftHT=height(root->left);
    int rightHT=height(root->right);
    int currHT=max(leftHT,rightHT)+1;
    return currHT;
}

int count(node* root){
    if (root==NULL)
    {
       return 0;
    } 
    int leftC=count(root->left);
    int rightC=count(root->right);
    return leftC+rightC+1;
}

int sum(node* root){
    if (root==NULL)
    {
       return 0;
    }
    int leftsum=sum(root->left);
    int rightsum=sum(root->right);
    return rightsum+leftsum+root->data;
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* root=buildtree(nodes);
    cout<<"sum= "<<height(root)<<endl;
   
    return 0;
} 