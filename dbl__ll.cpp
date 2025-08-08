#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=prev=NULL;
    }
};

class doublylist{
    public:
    node* head;
    node* tail;
    doublylist(){
        head=tail=NULL;
    }

    void push_front(int val){
        node* newnode=new node(val);
    if (head==NULL)
    {
       head=tail=newnode;
    }else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    } 

    void pop_front(){
        node* temp=head;
        head=head->next;
        if (head!=NULL)
        {
          head->prev=NULL; 
        }  
        temp->next=NULL;
        delete temp;    
    }

    void printlist(){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL\n";
    } 
};

int main(){
   doublylist dbll;
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.printlist();
    dbll.pop_front();
     dbll.printlist();
}