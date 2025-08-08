// #include<iostream>
// #include<queue>
// #include<string>
// using namespace std;
// int main(){
//     priority_queue<string>pq;
//    // priority_queue<string,vector<string>,greater<string>>pq;
//     pq.push("hello");
//     pq.push("apna college");
//     pq.push("mr lucky");
//     pq.push("hi");
//     while(!pq.empty()){
//     cout<<"top: "<<pq.top()<<endl;
//     pq.pop();
//     }
//     return 0;
// }

//push in heap
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Heap{
    vector<int>vec;
    public:
    void push(int val){
        vec.push_back(val);
        //fix heap
        int x=vec.size()-1;
        int parI=(x-1)/2;
        while (parI>=0&&vec[x]>vec[parI])
        {
            swap(vec[x],vec[parI]);
            x=parI;
            parI=(x-1)/2;
        }
        
    }
    void pop(){

    }
    int top(){
        return vec[0];
    }
    bool empty(){
        return vec.size()==0;
    }
};
int main(){
    Heap heap;
    heap.push(50);
    heap.push(100);
    heap.push(10);
    cout<<"top: "<<heap.top()<<endl;
    return 0;
}