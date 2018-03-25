//
//  main.cpp
//  Week of Code 34 - Maximum Gcd and Sum
//
//  Created by S M HEMEL on 7/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//


#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int a[1000011],b[1000011];
bool bool_a[1000011],bool_b[1000011];
vector <int> v,v1;
int Max_a = 0, Max_b = 0;
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
int main()
{
    int n, Max = 0,sum = 0,x,k=0,k1=0;
    read(n);
    for(int i=0; i<n; i++){
        read(x);
        if(!bool_a[x]){
            a[k++] = x;
            bool_a[x] = 1;
            if(Max_a<x)
                Max_a = x;
        }
    }
    for(int i=0; i<n; i++){
        read(x);
        if(!bool_b[x]){
            b[k1++] = x;
            bool_b[x] = 1;
            if(bool_a[x] && Max<x){
                Max = x;
                sum = x+x;
            }
            if(Max_b<x)
                Max_b = x;
        }
    }
    sort(a,a+k,greater<int>());
    sort(b,b+k1,greater<int>());
    for(int i=0; i<k; i++)
    {
        for(int l=a[i]; l<=Max_b; l += a[i]){
            if(bool_b[l]){
                int temp = a[i]+l;
                if(sum<=temp){
                    sum = temp;
                    break;
                }
            }
        }
    }
    for(int i=0; i<k1; i++)
    {
        for(int l=b[i]; l<=Max_a; l += b[i]){
            if(bool_a[l]){
                int temp = b[i]+l;
                if(sum<=temp){
                    sum = temp;
                }
                break;
            }
        }
    }
    if(sum==0){
        sum = a[0]+b[0];
    }
    printf("%d\n",sum);
    return 0;
}
