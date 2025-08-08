#include<iostream>
//#include<list>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    public:
    node* head;
    node* tail;
   // public:
    List(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        node* newnode=new node(val);
        if (head==NULL)
        {
            head=tail=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        } 
    }
    void pop_front(){
        if (head==NULL)
        {
            cout<<"linked list is empty"<<endl;
            return;
        }
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;  
    }
    void push_back(int val){
            node* newnode=new node(val);
            if (head==NULL)
            {
                head=tail=newnode;
            }else{
                tail->next=newnode;
                tail=newnode;
            }  
        }
};
void printlist(node* head){
        node* temp=head;
        while(temp !=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
bool isCycle(node* head){
        node* slow=head;
        node* fast=head;
        while (fast!=NULL&& fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast)
            {
               cout<<"cycle exist\n";
               return true;
            }   
        }
        cout<<"cycle doesn't exist\n";
        return false;    
    }
void removecycle(node* head){
    node* slow=head;
    node* fast=head;
    bool iscycle=false;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast)
        {
            cout<<"cycle exist\n";
            iscycle = true;
            break;
        }  
    }
    if (!iscycle)
    {
        cout<<"cycle doesnt exist\n";
        return;
    }
    slow=head;
    if (slow==fast){
        while (fast->next!=slow)
        {
            fast=fast->next;
        }
        fast->next=NULL;
    }else{
        node* prev=fast;
        while (slow!=fast)
        {
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=NULL;
    }
}
node* splitatmid(node* head){
    node* slow=head;
    node* fast=head;
    node* prev=NULL;
    while (fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if (prev!=NULL){
    prev->next=NULL;
    }
    return slow;   
}

node* merge(node* left,node* right){
    List ans;
    node* i=left;
    node* j=right;
    while (i!=NULL && j!=NULL)
    {
        if(i->data <= j->data){
        ans.push_back(i->data);
        i=i->next;
        }
        else{
            ans.push_back(j->data);
            j=j->next;
        }
    }
    while(i!=NULL){
        ans.push_back(i->data);
        i=i->next;
    } 
    while(j!=NULL){
        ans.push_back(j->data);
        j=j->next;
    } 
    return ans.head; 
}
node* mergesort(node* head){
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    
    node* righthead=splitatmid(head);
    node* left=mergesort(head);//left head
   node* right= mergesort(righthead);//right head
   return merge(left,right);
}

node* reverse(node* head){
    node* prev=NULL;
    node* curr=head;
    node* next=NULL;
    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
} 

node* zigzagll(node* head){
    node* righthead=splitatmid(head);
    node* rightheadrev=reverse(righthead);
    //alternate merging
    node* left=head;
    node* right=rightheadrev;
    node* tail=right;
    while (left!=NULL&& right!=NULL)
    {
        node* nextleft=left->next;
        node* nextright=right->next;

        left->next=right;
        right->next=nextleft;

        tail=right;
        left=nextleft;
        right=nextright;
    }
    if (right!=NULL)
    {
        tail->next=right;
    }
    return head;
}
  
int main(){
List ll;
ll.push_front(5);
ll.push_front(4);
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
printlist(ll.head);
ll.head=zigzagll(ll.head);
printlist(ll.head);
}

//list instl
// #include<iostream>
// #include<list>
// #include<iterator>
// using namespace std;
// void printlist(list<int>ll){
//     list<int>::iterator itr;
//     for (itr = ll.begin(); itr != ll.end(); itr++)
//     {
//         cout<<*itr<<"->";
//     }
//     cout<<"NULL"<<endl;
// }
// int main(){
//     list<int>ll;
//     ll.push_front(2);
//     ll.push_front(1);

//     ll.push_back(3);
//     ll.push_back(4);
//     printlist(ll);
//     cout<<"size="<<ll.size()<<endl;
//     cout<<"head="<<ll.front()<<endl;
//     cout<<"tail="<<ll.back()<<endl;
//     ll.pop_front();
//     printlist(ll);
// }