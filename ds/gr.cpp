#include <iostream>

using namespace std;

int main(){
int n;
cout<<"enter number of vertices: ";
cin>>n;
int adj[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        adj[i][j]=0;
    }
}
int e;
cout<<"enter number of edges: ";
cin>>e;
cout<<"enter the edges(u,v): "<<endl;
int u,v;
for(int i=0;i<e;i++){
    cin>>u>>v;
    adj[u-1][v-1] = 1;
    adj[v-1][u-1] = 1;
}
cout<<"adjacency matrix: "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}
}