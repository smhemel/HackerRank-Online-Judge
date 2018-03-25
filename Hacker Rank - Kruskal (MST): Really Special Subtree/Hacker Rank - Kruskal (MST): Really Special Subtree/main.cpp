//
//  main.cpp
//  Hacker Rank - Kruskal (MST): Really Special Subtree
//
//  Created by S M HEMEL on 1/15/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;
template<class T> struct Edge {
    T u,v; int w;
    Edge(T u,T v,int w): u(u),v(v),w(w) { }
    bool operator < (Edge<T> &obj) {
        return w<obj.w;  }
};
template<class T> class DisjointSets{
    map<T,T> disjoint;
public:
    void makeSet(T a) { disjoint[a]=a; }
    T find(T a) { T parent=disjoint[a]; return (parent==a?a:find(parent) ); }
    bool unionn(T u,T v){
        T p1=find(u),p2=find(v);
        return p1!=p2? (disjoint[p2]=p1) : false;
    }
};
int main()
{
    vector< Edge <int> > edges;
    DisjointSets<int> s;
    int n,e,min_cost=0,mst_edges=0,start;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int u,v; int w; cin>>u>>v>>w; s.makeSet(u); s.makeSet(v); edges.push_back(Edge<int>(u,v,w));
    }
    cin>>start;
    sort(edges.begin(),edges.end());
    for(int i=0; i<e && mst_edges<n; i++){
        if(s.unionn(edges[i].u,edges[i].v)){
            min_cost+=edges[i].w; mst_edges++;
        }
    }
    cout<<min_cost;
}
