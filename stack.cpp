// #include<iostream>
// #include<vector>
// using namespace std;
// template<class T>
// class stacks{
//     vector<T>vec;
//     public:
//     void push(T val){
//         vec.push_back(val);
//     }
//     void pop(){
//         if (isempty())
//         {
//             cout<<"stack is empty\n";
//             return;
//         }
//         vec.pop_back();
//     }
//     T top(){
//         if (isempty())
//         {
//             cout<<"stack is empty\n";
//             return -1;
//         }        
//         int lastidx=vec.size()-1;
//         return vec[lastidx];
//     }
//     bool isempty(){
//         return vec.size()==0;
//     }
// };
// int main(){
//     stacks<int> s;
//     s.push(3);
//     s.push(2);
//     s.push(1);
//     while (!s.isempty())
//     {
//        cout<<s.top() <<" ";
//        s.pop();
//     }
//     cout<<endl;
//     return 0;
// }

//IMPLEMENTATION OF STACK USING LINKED LIST
// #include<iostream>
// #include<vector>
// #include<list>
// using namespace std;
// template <class T>
// class stacks{
//     list<T>ll;
//     public:
//     void push(T val){
//         ll.push_front(val);
//     }
//     void pop(){
//         ll.pop_front();
//     }
//     T top(){
//         return ll.front();
//     }
//     bool isempty(){
//         return ll.size()==0;
//     }
// };
// int main(){
//     stacks<int> s;
//     s.push(3); 
//     s.push(2);
//     s.push(1);
//     while (!s.isempty())
//     {
//        cout<<s.top()<<" ";
//        s.pop();
//     }
//     cout<<endl;
// }

//WITHOUT LIST
// #include<iostream>
// #include<stack>
// using namespace std;
// template<class T>
// class node{
//     public:
//     T data;
//     node* next;
//     node(T val){
//         data=val;
//         next=NULL;
//     }
// };
// template<class T>
// class Stack{
//     node<T>* head;
//     public:
//     stacks(){
//         head=NULL;
//     }
//     void push(T val){
//         node<T>* newnode=new node<T>(val);
//         if (head==NULL)
//         {
//             head=newnode;
//         }else{
//             newnode->next=head;
//             head=newnode;
//         }   
//     }
//     void pop(){
//         node<T>* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     T top(){
//         return head->data;
//     }
//     bool isempty(){
//         return head==NULL;
//     }
    
// };
// void pushAtBottom(stack<int> &s,int val){
//         if (s.empty())
//         {
//            s.push(val);
//            return ;
//         }
//        int temp=s.top();
//        s.pop();
//        pushAtBottom(s,val);
//        s.push(temp); 
//     }
// int main(){
//      // Stack<int> s;
//      stack<int>s;
//     s.push(3); 
//     s.push(2);
//     s.push(1);
//     pushAtBottom(s,4);
//     while (!s.empty())
//     {
//        cout<<s.top()<<" ";
//        s.pop();
//     }
//     cout<<endl;
// }

//REVERSE A STACK 
#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>&s,int val){
    if (s.empty())
    {
        s.push(val);
        return;
    }
    int temp=s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}

string reversestring(string str){
    string ans;
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }
    while (!s.empty())
    {
       char top=s.top();
       ans +=top;
        s.pop();
    }
   return ans; 
    
}

void reverse(stack<int>s){
    if (s.empty())
    {
        return;
    }

    int temp=s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s,temp);
}
void printstack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    // stack<int>s;
    // s.push(3);
    //  s.push(2);
    //   s.push(1);
    //   pushAtBottom(s,4);
    //   while (!s.empty())
    //   {
    //     cout<<s.top()<<" ";
    //     s.pop();
    //   }

    // string str="abcd";
    // cout<<"reverse= "<<reversestring(str)
    
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);
    //printstack(s);
    reverse(s);
    printstack(s);
      return 0;
}

