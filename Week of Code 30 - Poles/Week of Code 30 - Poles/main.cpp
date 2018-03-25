//
//  main.cpp
//  Week of Code 30 - Poles
//
//  Created by S M HEMEL on 3/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
vector < pair <int,int > > v;
bool sortbyfirst(const pair<int,int> &a, const pair<int,int> &b)
{
    return(a.first < b.first);
}
int main()
{
    ios_base :: sync_with_stdio(0);
    int n,x,y,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end(), sortbyfirst);
    long long int ans = 0;
    //long long int min = 1e12;
    if(m==1)
    {
        for(int i=n-1; i>=1; i--)
            ans += (v[i].second * (v[i].first-v[0].first));
        cout << ans << endl;
        return 0;
    }
    if(m==2)
    {
        long long int min = 1e15;
        int c1 = 1;
        while(c1!=n-1)
        {
            for(int i=c1-1; i>0; i--)
                ans += (v[i].second * (v[i].first-v[0].first));
            for(int i=n-1; i>c1; i--)
                ans += (v[i].second * (v[i].first-v[c1].first));
            if(min>ans)
                min = ans;
            ans = 0;
            c1++;
        }
        cout << min << endl;
        return 0;
    }
    if(m==3)
    {
        long long int min = 1e15;
        int z = 1,z1 = 2,c=0,c1=0;
        while(z1!=n-1)
        {
            c = z,c1 = z1;
            while(c1!=n-1)
            {
                for(int i=c-1; i>0; i--)
                    ans += (v[i].second * (v[i].first-v[0].first));
                for(int i=c1-1; i>c; i--)
                    ans += (v[i].second * (v[i].first-v[c].first));
                for(int i=n-1; i>c1; i--)
                    ans += (v[i].second * (v[i].first-v[c1].first));
                if(min>ans)
                    min = ans;
                ans = 0;
                c1++;
            }
            z++;
            z1++;
        }
        cout << min << endl;
        return 0;
    }
    if(m==4)
    {
        long long int min = 1e15;
        int z = 1,z1 = 2,z2 = 3,c=0,c1=0,c2=0;
        while(z2!=n-1){
            c = z,c1 = z1,z2 = c2;
            while(z1!=n-1)
            {
                c = z,c1 = z1,c2 = z2;
                while(c2!=n-1)
                {
                    for(int i=c-1; i>0; i--)
                        ans += (v[i].second * (v[i].first-v[0].first));
                    for(int i=c1-1; i>c; i--)
                        ans += (v[i].second * (v[i].first-v[c].first));
                    for(int i=c2-1; i>c1; i--)
                        ans += (v[i].second * (v[i].first-v[c1].first));
                    for(int i=n-1; i>c2; i--)
                        ans += (v[i].second * (v[i].first-v[c1].first));
                    if(min>ans)
                        min = ans;
                    ans = 0;
                    c2++;
                }
                z1++;
                z2++;
            }
            z++;
            z1++;
            z2++;
            cout << min << endl;
            return 0;
        }
    }
    return 0;
}
