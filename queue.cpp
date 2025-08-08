// #include<iostream>
// #include<string>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// class queue{
//     node* head;
//     node* tail;
//     public:
//     queue(){
//         head=tail=NULL;
//     }

//     void push(int data){
//         node* newnode=new node(data);
//         if (head==NULL)
//         {
//             head=tail=newnode;
//         }else{
//             tail->next=newnode;
//             tail=newnode;
//         }    
//     }
//     void pop(){
//         if (empty())
//         {
//            cout<<"queue is empty\n";
//            return;
//         }
//         node* temp=head;
//         head=head->next;
//         delete temp;
        
//     }
//     int front(){
//          if (empty())
//         {
//            cout<<"queue is empty\n";
//            return-1;
//         }
//         return head->data;
//     }

//     bool empty(){
//         return head==NULL;
//     }
// };
// int main(){
//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     while(!q.empty()){
//         cout<<q.front()<<endl;
//         q.pop();
//     }
// }

//non repeating letter
// #include<iostream>
// #include<queue>
// using namespace std;
// void firstnonrepeating(string str){
//     queue<char>q;
//     int freq[26]={0};
//     for (int i = 0; i < str.size(); i++)
//     {
//         char ch=str[i];
//         q.push(ch);
//         freq[ch-'a']++;
//         while (!q.empty()&&freq[q.front()-'a']>1)
//         {
//            q.pop();
//         }
//        if (q.empty())
//        {
//         cout<<"-1\n";
//        }else{
//         cout<<q.front()<<"\n";
//        }
//     }   
// }
// int main(){
//     string str="aabccxb";
//     firstnonrepeating(str);
//     return 0;
// }


//interleave 2 queues
// #include<iostream>
// #include<queue>
// using namespace std;
// void interleave(queue<int>&org){
//     int n=org.size();
//     queue<int>first;
//     for (int i = 0; i < n/2; i++)
//     {
//        first.push(org.front());
//        org.pop();
//     }
//     while (!first.empty())
//     {
//         org.push(first.front());
//         first.pop();

//         org.push(org.front());
//         org.pop();
//     }
    
// }
// int main(){
//     queue<int>org;
//     for (int i = 1; i <= 10; i++)
//     {
//       org.push(i);  
//     }
//     interleave(org);
//     for (int i = 1; i <= 10; i++)
//     {
//       cout<<org.front()<<" ";
//       org.pop();  
//     }
//     cout<<endl;
// }

//reverse a queue
// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void reverse(queue<int>&q){
//     stack<int>s;
//     while (!q.empty())
//     {
//        s.push(q.front());
//        q.pop();
//     }
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
    
// }
// int main(){
//     queue<int>q;
//     for (int i = 1; i <=5; i++)
//     {
//         q.push(i);
//     }
//     reverse(q);
//     for (int i = 1; i <=5; i++)
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
// }


//double ended queue
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int>deq;
//     deq.push_front(2);
//     deq.push_front(1);

//     deq.push_back(3);
//     deq.push_back(4);//1 2 3 4

//     deq.pop_front();
//     deq.pop_back();
//     cout<<deq.front()<<" ";
//     cout<<deq.back();
// }

//queue using deque
// #include<iostream>
// #include<deque>
// using namespace std;
// class queue{
//     deque<int>deq;
//     public:
//     void push(int data){
//         deq.push_back(data);
//     }
//     void pop(){
//         deq.pop_front();
//     }
//     int front(){
//         return deq.front();
//     }
//     bool empty(){
//         return deq.empty();
// }
// };
// int main(){
//     queue q;
//     for (int i = 1; i <= 5; i++)
//     {
//         q.push(i);
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
// }

//stack using deque
#include<iostream>
#include<deque>
using namespace std;
class stack{
    deque<int>deq;
    public:
    void push(int data){
        deq.push_front(data);
    }
    void pop(){
        deq.pop_front();
    }
    int top(){
        return deq.front();
    }
    bool empty(){
        return deq.empty();
}
};
int main(){
    stack s;
    for (int i = 1; i <= 5; i++)
    {
        s.push(i);
    }
    for (int i = 1; i <= 5; i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}