//
//  main.cpp
//  Week of Code 33 - Transform to Palindrome
//
//  Created by S M HEMEL on 6/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
#include <cmath>
#include <utility>
#include <unordered_map>
#include <cstdlib>
#include <string>
#include <set>
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
//vector<int> v;
int x[300000],y[300000],v[500001];
int arr[300010],len = 0;
class DisjointSet
{
public:
    int parent[555555];
    //unordered_map <int, int> parent;
public:
    void makeSet(vector<int> uni)
    {
        for(int i : uni)
            parent[i] = i;
    }
    int Find(int k)
    {
        if(parent[k]==k)
            return k;
        return
            Find(parent[k]);
    }
    void Union(int a, int b)
    {
        int x = Find(a);
        int y = Find(b);
        parent[x] = y;
    }
};

void printSets(DisjointSet &ds,int k)
{
    for(int i=0; i<k; i++)
        arr[len++] = ds.Find(v[i]);
}
int lps(int arr[], int i, int j)
{
    if (i>j)
        return 0;
    if (i==j)
        return 1;
    if(arr[i]==arr[j])
        return lps(arr, i+1,j-1)+2;
    return max(lps(arr,i,j-1),lps(arr,i+1, j));
}
int main()
{
    int n,m,k,z;
    cin >> n >> m >> k;
    for(int i=0; i<m; i++){
        read(x[i]);read(y[i]);
    }
    DisjointSet ds;
    for(int i=0; i<k; i++){
        read(z);
        //v.push_back(z);
        v[i]= z;
        ds.parent[z] = z;
    }
    //ds.makeSet(v);
    for(int i=0; i<m; i++){
        ds.Union(x[i],y[i]);
    }
    printSets(ds,k);
    printf("%d\n",lps(arr,0,len-1));
    return 0;
}
