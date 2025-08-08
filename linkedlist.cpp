#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
   // public:
    node(int val){
        data =val;
        next=NULL;
    }
};
 class list{
        node* head;
        node* tail;
        public:
        list(){
            head=NULL;
            tail=NULL;
        }
        void push_front(int val){
            node* newnode=new node(val);//dynamic allocation
            if (head==NULL)
            {
               head=tail=newnode;
            }else{
                newnode->next=head;
                head=newnode;
            } 
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
        void printlist(){
            node* temp=head;
            while (temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL\n";
        }
        void insert(int val,int pos){
            node* newnode=new node(val);
            node* temp=head;
            for (int i = 0; i <pos-1; i++)
            {
                if (temp==NULL)
                {
                   cout<<"position   is invalid"<<endl;
                   return;
                }
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
        }
        void pop_front(){
            if (head==NULL)
            {
               cout<<"linked list is empty";
               return ;
            }
            
            node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
        void pop_back(){
            node* temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
        int searchitr(int key){
            node* temp=head;
            int idx=0;
            while (temp!=NULL)
            {
                if (temp->data==key)
                {
                    return idx;
                }
                temp=temp->next;
                idx++;
            }
           return -1; 
        }
        int helper(node* temp,int key){
            if (temp==NULL)
            {
                return -1;
            }
           if (temp->data==key)
           {
            return 0;
           }
           int idx=helper(temp->next,key);
           if (idx==-1)
           {
            return -1;
           }
           return idx+1;   
        }
        int searchrec(int key){
            return helper(head,key);
        }
        void reverse(){
            node* curr=head;
            node* prev=NULL;
            while(curr!=NULL){
               node* next=curr->next;
               curr->next=prev;
               prev=curr;
               curr=next;
            }
            head=prev;
        }
        int getsize(){
            int sz=0;
            node* temp=head;
            while(temp!=NULL){
                temp=temp->next;
                sz++;
            }
            return sz ;
        } 
        void removenth(int n){
            node* prev=head;
            int size=getsize();
            for (int i = 1; i < (size-n); i++)
            {
                prev=prev->next;
            }
            node* todel=prev->next;
            cout<<"going to delete "<<todel->data<<endl;
            prev->next=prev->next->next;
        }   
};
int main(){
    list ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printlist();
    ll.insert(7,3);
   // ll.removenth(2);
    ll.printlist();
    return 0;
}