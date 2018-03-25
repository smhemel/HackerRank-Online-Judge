//
//  main.cpp
//  101 Hack 49 - Summing the Path Weights Between Nodes
//
//  Created by S M HEMEL on 5/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
bool check[100001];
vector <pair<int , int>> v[100000];
int main()
{
    int n,node,edge,w;
    cin >> n;
    for(int i=0; i<n; cin >> check[i],i++);
    for(int i=0; i<n-1; i++){
        cin >> node >> edge >> w;
        if(!check[node])
            v[node].push_back(make_pair(edge,w));
        cin >> node >> edge >> w;
        if(!check[edge])
            v[edge].push_back(make_pair(node,w));
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        if(!check[i]){
            for(auto u: v[i]){
                if(check[u.first]){
                    ans += u.second;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
