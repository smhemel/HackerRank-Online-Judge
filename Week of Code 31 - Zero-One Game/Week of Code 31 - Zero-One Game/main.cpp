//
//  main.cpp
//  Week of Code 31 - Zero-One Game
//
//  Created by S M HEMEL on 4/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; cin >> a[i],i++);
    a.push_back(1);
    int turns = 0;
    for(int l=0; l<n; l++)
    {
        if(a[l]==1)
            continue;
        int r = l;
        while(r<n && (a[r]==0 || a[r+1]==0))
            r++;
        turns += max(0, r-l-2);
        l = r-1;
    }
    cerr << turns << endl;
    cout << (turns%2 ? "Alice" : "Bob") << endl;
}

int main()
{
    int test;
    cin >> test;
    for(int i=0; i<test; i++)
        solve();
    return 0;
}
