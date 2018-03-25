//
//  main.cpp
//  Women's CodeSprint 3 - Hackathon Shirts
//
//  Created by S M HEMEL on 3/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//





#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <utility>
#include <vector>
using namespace std;
int a[50011];
vector<pair<int , int> > v;
std::clock_t __start;
double __duration;
void start_timer() { __start = std::clock(); }
void print_timer() {
    __duration = (std::clock() - __start) / (double)CLOCKS_PER_SEC;
    std::cout << "Duration: " << __duration << '\n';
}
bool sortbyfirst(const pair<int,int> &a, const pair<int,int> &b)
{
    return(a.first < b.first);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //start_timer();
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int list,x,y,cnt = 0;
        scanf("%d",&list);
        int p = list;
        while(p--)
        {
            scanf("%d%d",&x,&y);
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(), v.end());
        int l=0;
        for(int i=0; i<list && l<n; i++)
        {
            if(a[l]<=v[i].second)
            {
                while (a[l]<=v[i].second && l<n) {
                    if(a[l]>=v[i].first)
                        cnt++;
                    l++;
                }
            }
        }
        printf("%d\n",cnt);
        v.clear();
        memset(a,0,sizeof(a));
    }
    //print_timer();
    return 0;
}
