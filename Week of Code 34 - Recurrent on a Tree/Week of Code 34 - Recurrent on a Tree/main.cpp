//
//  main.cpp
//  Week of Code 34 - Recurrent on a Tree
//
//  Created by S M HEMEL on 20/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;
template <typename T>
void read(T &x)
{
    char c;
    bool t=false;
    for(c=getchar(); (c<'0'||c>'9') && c!='-'; c=getchar());
    if(c=='-'){
        c = getchar();
        t = true;
    } x = c-'0';
    for(c=getchar(); c>='0'&&c<='9'; c=getchar())
        x=x*10+c-'0';
    if(t) x=-x;
}
int w[1000000];
vector <int> v[100000];
int main()
{
    int n,x,y;
    read(n);
    ll ans = 0;
    for(int i=1; i<n; i++){
        read(x);read(y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        cin >> x;
        w[i] = x;
    }
    for(int i=1; i<=n; i++){
        int size = (int)v[i].size();
        ans += w[i];
        for(int i=0; i<size; i++){
            
        }
    }
    return 0;
}
