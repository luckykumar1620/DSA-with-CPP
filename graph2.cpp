#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;
class Graph{
    int v;
    list<int>* l;
    public:
    Graph(int v){
        this->v=v;
        l=new list<int>[v];
    }
    void addedge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print(){
        for (int  u = 0; u < v; u++)
        {
            list<int>neighbours=l[u];
            cout<<u<<" : ";
            for(int v:neighbours){
                cout<<v<<" ";
            }
            cout<<endl;
        }  
    }
    void bfshelper(int st,vector<bool>&vis){
    queue<int>q;
    q.push(st);
    vis[st]=true;
    while(q.size()>0)
    {
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";
        list<int>neighbours=l[curr];
        for(int neigh:neighbours){
            if (!vis[neigh])
            {
                vis[neigh]=true;
                q.push(neigh);
            }
            
        }
    }
    cout<<endl;
    }
    void bfs(){
        vector<bool>vis(v,false);
        for (int i = 0; i < v; i++)
        {
           if (!vis[i])
           {
            bfshelper(i,vis);
            cout<<endl;
           }
           
        }  
    }
    void dfshelper(int u,vector<bool>&vis){
        cout<<u<<" ";
        vis[u]=true;
        list<int>neighbours=l[u];
        for(int v:neighbours){
            if (!vis[v])
            {
                dfshelper(v,vis);
            }
            
        }
    }
    void dfs(){
        vector<bool>vis(v,false);
        for (int i = 0; i <v; i++)
        {
            if (!vis[i])
            {
                dfshelper(i,vis);
            }
            
        }
        
    }
};
int main(){
Graph graph(6);
    graph.addedge(1,6);
    graph.addedge(6,4);
    graph.addedge(4,9);
    graph.addedge(4,3);
    graph.addedge(3,8);
    graph.addedge(3,7);
    //graph.addedge(5,6);
    graph.dfs();
}