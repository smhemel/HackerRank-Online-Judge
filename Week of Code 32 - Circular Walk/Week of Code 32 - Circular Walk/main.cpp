//
//  main.cpp
//  Week of Code 32 - Circular Walk
//
//  Created by S M HEMEL on 5/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

//1e7 0 5*1e6
//1 3 4 5
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
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
int r[10000000];
bool check[10000000];
int n,s,t,g,seed,p,cnt[10000000];
queue <int> Q;
inline void setup(int u)
{
    int c = r[u];
    for(int i=u+1; c!=0; i++){
        if(i==n) i=0;
        if(!check[i]){
            cnt[i] = cnt[u]+1;
            if(r[i]) Q.push(i);
            check[i]=1;
        }
        c--;
    }
}
inline void setup1(int u)
{
    int c = r[u];
    for(int i=u-1; c!=0; i--){
        if(i<0) i=n-1;
        if(!check[i]){
            cnt[i] = cnt[u]+1;
            if(r[i]) Q.push(i);
            check[i]=1;
        }
        c--;
    }
}
int dfs(int point){
    check[point] = 1;
    Q.push(point);
    while(!Q.empty())
    {
        point = Q.front();
        Q.pop();
        setup(point);
        setup1(point);
        if(cnt[t])
            return cnt[t];
    }
    return -1;
}
int main()
{
    read(n); read(s); read(t);
    read(r[0]); read(g); read(seed); read(p);
    if(s==t) return 0 *puts("0");
    for(int i=1; i<n; i++)
        r[i] = ((r[i-1]*g)+seed)%p;
    if(r[s]==0)
        return 0 *puts("-1");
    cout << dfs(s) << endl;
    return 0;
}
