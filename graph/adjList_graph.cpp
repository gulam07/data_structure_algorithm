#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class graph{
    unordered_map<int,list<int>>adj;
    public:
    void edge(int u,int v,int direction){
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);

        }

    }

    void print(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j;
            }cout<<endl;
        }
    }

};

int main(){

    int n,m;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;

    graph g;
    cout<<"Enter the edges"<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.edge(u,v,0);

    }
    g.print();





    return 0;
}