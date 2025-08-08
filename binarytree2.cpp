#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
static int idx = -1;
node *buildtree(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }

    node *currnode = new node(nodes[idx]);
    currnode->left = buildtree(nodes);
    currnode->right = buildtree(nodes);

    return currnode;
}
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHT = height(root->left);
    int rightHT = height(root->right);
    int currHT = max(leftHT, rightHT) + 1;
    return currHT;
}
int diam1(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int currdiam = height(root->left) + height(root->right) + 1;
    int leftdiam = diam1(root->left);
    int rightdiam = diam1(root->right);
    return max(currdiam, max(leftdiam, rightdiam));
}

pair<int, int> diam2(node *root)
{
    if (root == NULL)
    {
        return make_pair(0, 0);
    }

    pair<int, int> leftinfo = diam2(root->left);
    pair<int, int> rightinfo = diam2(root->right);

    int currdiam = leftinfo.second + rightinfo.second + 1;
    int finaldiam = max(currdiam, max(leftinfo.first, rightinfo.first));
    int finalHT = max(leftinfo.second, rightinfo.second) + 1;
    return make_pair(finaldiam, finalHT);
}

// subtreee of another tree
bool isIdentical(node *root1, node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if (root1 == NULL || root2 == NULL)
    {
        return false;
    }

    if (root1->data != root2->data)
    {
        return false;
    }
    return isIdentical(root1->left, root2->left) &&
           isIdentical(root1->right, root2->right);
}

bool isSubtree(node *root, node *subroot)
{
    if (root == NULL && subroot == NULL)
    {
        return true;
    }
    else if (root == NULL || subroot == NULL)
    {
        return false;
    }

    if (root->data == subroot->data)
    {
        if (isIdentical(root, subroot))
        {
            return true;
        }
    }
    int isleftsubtree = isSubtree(root->left, subroot);
    if (!isleftsubtree)
    {
        return isSubtree(root->right, subroot);
    }

    return true;
}

// top view of a tree
void topview(node *root)
{
    queue<pair<node *, int>> Q;
    map<int, int> m;
    Q.push(make_pair(root, 0));
    while (!Q.empty())
    {
        pair<node *, int> curr = Q.front();
        Q.pop();

        node *currnode = curr.first;
        int currHD = curr.second;
    if (m.count(currHD)==0)
    {
       m[currHD]=currnode->data;
    }
    

if (currnode->left != NULL)
{
    pair<node *, int> left = make_pair(currnode->left, currHD - 1);
    Q.push(left);
}
if (currnode->right != NULL)
{
    pair<node *, int> right = make_pair(currnode->right, currHD + 1);
    Q.push(right);
}
    }
for (auto it : m)
{
    cout << it.second << " ";
}
cout << endl;
}


//KTH LEVEL OF A TREE
void KthHelper(node* root,int k,int currlevel){
    if (root==NULL)
    {
        return;
    }
    if (currlevel==k)
    {
        cout<<root->data<<" ";
        return;
    }
    KthHelper(root->left,k,currlevel+1);
    KthHelper(root->right,k,currlevel+1);
    
}

void Kthlevel(node* root,int k){
    KthHelper(root,k,1);
    cout<<endl;
}

//LOWEEST COMMON ANCISTOR
//APPROACH 1
bool rootTonodePath(node* root,int n,vector<int>&path){
    if (root==NULL)
    {
        return false;
    }
    if (root->data==n)
    {
       return true;
    }
    int isleft=rootTonodePath(root->left,n,path);
    int isright=rootTonodePath(root->right,n,path);
    if (isleft||isright)
    {
        return true;
    }
    path.pop_back();
    return false;
}

int LCA(node* root,int n1,int n2){
    vector<int>path1;
    vector<int>path2;
    rootTonodePath(root,n1,path1);
    rootTonodePath(root,n2,path2);
    int lca=-1;
    for (int i = 0,j=0; i < path1.size()&&j<path2.size(); i++,j++)
    {
       if (path1[i]!=path2[j])
       {
        return lca;
       }
       lca=path1[i];
    }
    return lca;
}

//approach2
node* LCA2(node* root,int n1,int n2){
    if (root==NULL)
    {
       return NULL;
    }
    if (root->data=n1||root->data==n2)
    {
        return root;
    }
    node* leftlca=LCA2(root->left,n1,n2);
    node* rightlca=LCA2(root->right,n1,n2);
    if (leftlca!=NULL&&rightlca!=NULL)
    {
       return root;
    }
    return leftlca==NULL?rightlca:leftlca;
    
}

//MINIMUM DISTANCE BETWEEEN NODES
int dist(node* root,int n){
    if (root==NULL)
    {
       return -1;
    }
    if (root->data==n)
    {
       return 0;
    }
    int leftdist=dist(root->left,n);
    if (leftdist!=-1)
    {
        return leftdist+1;
    }
    int rightdist=dist(root->right,n);
    if (rightdist!=-1)
    {
       return rightdist+1;
    }
    return -1;
}
int minDist(node* root,int n1,int n2){
    node* lca=LCA2(root,n1,n2);
    int dist1=dist(lca,n1);
    int dist2=dist(lca,n2);
    return dist1+dist2;
}

//Kth ancestor of node
int KthAncestor(node* root,int n,int k){
    if (root==NULL)
    {
       return -1;
    }
    if(root->data==n){
        return 0;
    }
    int leftdist=KthAncestor(root->left,n,k);
    int rightdist=KthAncestor(root->right,n,k);
    
    if (leftdist==-1&&rightdist==-1)
    {
        return -1;
    }
    int validval=leftdist==-1?rightdist:leftdist;
    if (validval+1==k)
    {
       cout<<"kth ancestor= "<<root->data<<endl;
    }
    return validval+1;
}


int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = buildtree(nodes);
   int n1=5,n2=2;
  cout<<KthAncestor(root,n1,n2)<<endl;
}

// map in c++
