//
//  main.cpp
//  Week of Code 32 - Geometric Trick
//
//  Created by S M HEMEL on 5/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <cstring>
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
string s;
long long int a[500010],b[500010];
bool c[511111];
int main()
{
    int n;
    read(n);
    cin >> s;
    int k=0,k1=0;
    long long int l = 1;
    for(int i=0; i<n; i++,l++){
        if(s[i]=='a'){
            a[k++] = l;
            continue;
        }
        else if(s[i]=='b'){
            b[k1++] = (long long int)(l*l);
        }
        else
            c[l] = 1;
    }
    int cnt = 0;
    for(int i=0; i<k; i++)
        for(int l=0; l<k1; l++){
            long long int x = (long long int)b[l]/a[i];
            if(x>500000)
                continue;
            if(c[x] && !(b[l]%a[i]))
                cnt++;
        }
    cout << cnt << endl;
    return 0;
}
