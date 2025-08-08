// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// class node{
//     public:
//     string key;
//     int val;
//     node* next;
//     node(string key,int value){
//         this->key=key;
//         this->val=val;
//         next=NULL;
//     }
//     ~node(){
//         if (next!=NULL)
//         {
//            delete next;
//         }
        
//     }
// };

// class Hashtable{
//     int totsize;
//     int currsize;
//     node** table;
    
//     int hashfunction(string key){
//         int idx=0;
//         for (int  i = 0; i < key.size(); i++)
//         {
//            idx=(idx+(key[i]*key[i]))%totsize;
//         }
//         return idx%totsize;
//     }

//     void rehash(){
//         node** oldtable=table;
//         int oldsize=totsize;
//         totsize=2*totsize;
//         currsize=0;
//         table=new node*[totsize];
//         for (int i = 0; i < totsize; i++)
//         {
//             table[i]=NULL;
//         } 
//         //copy old values
//         for (int i = 0; i < oldsize; i++)
//         {
//             node* temp=oldtable[i];
//             while(temp!=NULL){
//                 insert(temp->key,temp->val);
//                 temp=temp->next;
//             }
//             if(oldtable[i]!=NULL){
//                 delete oldtable[i];
//             }
//         }
//       delete[] oldtable;  
//     }

//     public:
//     Hashtable(int size=5){
//         totsize=size;
//         currsize=0;
//         table=new node*[totsize];

//         for (int i = 0; i < totsize; i++)
//         {
//             table[i]=NULL;
//         }     
//     }

//     void insert(string key,int val){
//         int idx=hashfunction(key);
//         node* newnode=new node(key,val);
//         node* head = table[idx];
//         newnode->next=head;
//         head=newnode;
//         currsize++;

//         double lamda=currsize/(double)totsize;
//         if (lamda>1)
//         {
//             rehash();
//         }
        
//     } 

//     bool exists(string key){
//         int idx=hashfunction(key);
//         node* temp=table[idx];
//         while(temp!=NULL){
//             if (temp->key == key)
//             {
//                return true;
//             }
//             temp=temp->next;
//         }
//         return false; 
//     }
//     void remove(string key){

//     }  

//     void print(){
//         for (int i = 0; i < totsize; i++)
//         {
//             cout<<"idx"<<i<<"->";
//             node* temp=table[i];
//             while (temp!=NULL)
//             {
//                cout<<temp->key<<","<<temp->val<<"->";
//                temp=temp->next;
//             }
//             cout<<endl;
//         }
        
//     }
//     int search(string key){
//         int idx=hashfunction(key);
//         node* temp=table[idx];
//         while(temp!=NULL){
//             if (temp->key==key)
//             {
//                return temp->val;
//             }
//             temp=temp->next;
//         }
//         return -1; 
//     }
// };
// int main(){
//     Hashtable ht;
//     ht.insert("india",150);
//     ht.insert("china",200);
//     ht.insert("us",100);
//     ht.insert("france",165);
//     ht.insert("pak",50);

//     // if (ht.exists("china"))
//     // {
//     //     cout<<"china population: "<<ht.search("china")<<endl;
//     // }
//     // return 0;
//     ht.print();

// }


// #include<iostream>
// #include<string>
// #include<unordered_map>
// #include<unordered_set>
// #include<map>
// using namespace std;
// int main(){
// //    // unordered_map<string,int>m;
// //    map<string,int>m;
// //     m["india"]=100;
// //     m["chinna"]=200;
// //     m["us"]=10;
// //     m["canada"]=30;
// //     m["india"]=230;
// //    // cout<<m["india"];
// //    for(pair<string,int>country:m){
// //    cout<< country.first<<","<<country.second<<endl;
// //    }
    
// //    if (m.count("india"))
// //    {
// //     cout<<"india exist\n";
// //    }else{
// //    cout<<"india not exist";
// //    }
// //    m.erase("india");


//   unordered_set<int>s;
//  s.insert(1);
//  s.insert(4);
//  s.insert(6);
//  s.insert(3);
//  s.insert(9);
//  cout<<s.size()<<endl;
//  if (s.find(3)!=s.end())
//  {
//    cout<<"3 exists\n";
//  }else{
//     cout<<"3 not exist";
//  }
//  return 0;
// }

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[]={1,2,7,11,15,5,9};
    int n=7;
    int target=9;
    unordered_map<int,int>m;
    for (int i = 0; i < n; i++)
    {
       int comp=target-arr[i];
       if (m.count(comp))
       {
        cout<<"ans= "<<m[comp]<<","<<i;
        break;
       }
      m[arr[i]]=i;  
    }
   return 0; 
}
