//
//  main.cpp
//  সেগমেন্টেড সিভ (Segmented Sieve)
//
//  Created by S M HEMEL on 5/3/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
#define ll long int
using namespace std;
#define N 10000000
vector< ll >s,v,segment;
ll prime[N],k=1,size;
bool check[N];
void sieve()
{
    ll root = (int)sqrt(N);
    for(ll i=3; i<=root; i+=2)
        for(ll j=i*i; j<=N; j=j+2*i)
            check[j]=1;
    prime[0] = 2;
    for(ll i=3; i<=N; i+=2)
        if(!check[i])
            prime[k++] = i;
}
void segmented_sieve(ll l,ll u)
{
    ll start;
    v.clear();
    ll root = sqrt(u)+1;
    for(ll i=l; i<=u; i++)
        v.push_back(i);
    if(l==0)
        v[1]=0;
    else if(l==1)
        v[0]=0;
    for(ll i=0; prime[i]<=root; i++)
    {
        start = prime[i] * prime[i];
        if(start<l)
            start = ((l+prime[i]-1)/prime[i])*prime[i];
        for(ll j=start; j<=u; j+=prime[i])
            v[j-l]=0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll start,end,test;
    sieve();
    cin >> test;
    for(int t=1; t<=test; t++)
    {
        cin >> start >> end;
        segmented_sieve(start,end);
        for(ll i=start; i<=end; i++)
            if(v[i-start])
                segment.push_back(v[i-start]);
        for(ll i=0; i<segment.size(); i++)
            cout << segment[i] << endl;
        segment.clear();
        v.clear();
        cout<<endl;
    }
    return 0;
}
