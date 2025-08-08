#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;
class Graph{
    int v;//v=vertices
    list<int>* l;//different list of neighbours
    public:
    Graph(int v){
        this->v=v;
        l=new list<int>[v];
    }
    void addedge(int u,int v){//u---->v
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for (int u = 0; u < v; u++)
        {
            list<int>neighbours=l[u];
            cout<<u<<" : ";
            for (int v :neighbours)
            {
                cout<<v<<" ";
            }
            cout<<endl;
            
        }
        
    }

    void bfs(){
        queue<int>q;
        vector<bool>vis(v,false);
        q.push(0);
        vis[0]=true;
        
        while(q.size()>0){
            int u=q.front();
            q.pop();
            cout<<u<<" ";
        list<int>neighbours=l[u];
        for(int v:neighbours){
            if(!vis[v]){
                vis[v]=true;
                q.push(v);
            }
        }

        }
        cout<<endl;
    }


    void dfshelper(int u,vector<bool>&vis){
        vis[u]=true;
        cout<<u<<" ";
        list<int>neighbour=l[u];
        for(int v:neighbour)
        {
            if (!vis[v])
            {
               dfshelper(v,vis);
            }
            
        }
    
    }
    void dfs(){
        vector<bool>vis(7,false);
        dfshelper(0,vis);
    }
    
    //haspath problem
    bool pathhelper(int src,int dest,vector<bool>&vis){
        if (src==dest)
        {
           return true;
        }
        vis[src]=true;
        list<int>neighbours=l[src];
        for(int v:neighbours){
            if (!vis[v])
            {
               if(pathhelper(v,dest,vis)){
                return true;
               }
            }
            
        }
        return false;
    }
    bool haspath(int src,int dest){
        vector<bool>vis(v,false);
        return pathhelper(src,dest,vis);
    }
};
int main(){
    Graph graph(7);
    //undirected graph
    graph.addedge(0,1);
    graph.addedge(0,2);
    graph.addedge(1,3);
    graph.addedge(2,4);
    graph.addedge(3,4);
    graph.addedge(3,5);
    graph.addedge(5,6);
    
    
   cout<< graph.haspath(5,6);

}