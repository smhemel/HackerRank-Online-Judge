//
//  main.cpp
//  Week of Code 30 - Range Modular Queries
//
//  Created by S M HEMEL on 3/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <assert.h>
#include <cmath>
using namespace std;
#define INF 1000000007
typedef long long ll;
typedef vector< int > vi;
typedef vector<ll> vll;
typedef vector<vector<int> > vvi;
typedef pair<int,int> ii;
typedef vector<pair<int,int> > vii;
typedef vector<vector<pair<int,int> > > vvii;

#define all(x) (x).begin(), (x).end()
#define nall(x) (x).rbegin(), (x).rend()
#define sz(a) int((a).size())
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define rz resize()
#define F first
#define S second
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define NFOR(i,a,b) for(int i=(a);i>=(b);--i)
#define TCASE int __T;cin>>__T;FOR(Tc,1,__T)
inline int add(int a,int b, int m=INF){a+=b;if(a>=m)a-=m;return a;}
inline int mul(int a,int b, int m=INF){return (int)(((ll)a*(ll)b)%m);}
const int N = 40000;
const int K = sqrt(N);
int a[N+1];
vi pos[K+2][K+2];
vi poss[N+1];
int main()
{
    
    int n,q;
    cin>>n>>q;
    assert(n>=1);
    assert(q>=0);
    FOR(i,0,n-1)cin>>a[i];
    
    FOR(i,1,K-1)
    {
        FOR(j,0,n-1)
        pos[i][a[j]%i].push_back(j);
    }
    FOR(i,0,n-1)
    {
        poss[a[i]].push_back(i);
    }
    
    FOR(i,0,q-1){
        int l,r,x,y;
        cin>>l>>r>>x>>y;
        //assert(x>=1 and x<=N and y<x and y>=0);
        int ans=0;
        if(x<K){
            int st = lower_bound(all(pos[x][y]),l)-pos[x][y].end();
            int en = upper_bound(all(pos[x][y]),r)-pos[x][y].end();--en;
            if(en-st+1>=1)ans+=en-st+1;
            cout<<ans<<"\n";continue;
        }
        for(int z=y;z<=40000;z+=x)
        {
            int st = lower_bound(all(poss[z]),l)-poss[z].end();
            int en = upper_bound(all(poss[z]),r)-poss[z].end();--en;
            if(en-st+1>=1)ans+=en-st+1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
