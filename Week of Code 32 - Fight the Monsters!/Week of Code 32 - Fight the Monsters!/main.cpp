//
//  main.cpp
//  Week of Code 32 - Fight the Monsters!
//
//  Created by S M HEMEL on 5/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
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
int a[100010];
int main()
{
    int n,hit,t;
    read(n);
    read(hit);
    read(t);
    for(int i=0; i<n; read(a[i]),i++);
    sort(a,a+n);
    int cnt = 0;
    for(int i=0; i<n; i++){
        while(a[i]>0){
            a[i] -= hit;
            t--;
            if(!t){
                if(a[i]<=0)
                    cnt++;
                return 0 * printf("%d\n",cnt);
            }
        }
        if(a[i]<=0)
            cnt++;
        if(!t)
            return 0 * printf("%d\n",cnt);
    }
    printf("%d\n",cnt);
    return 0;
}
