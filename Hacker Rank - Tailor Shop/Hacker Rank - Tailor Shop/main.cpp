//
//  main.cpp
//  Hacker Rank - Tailor Shop
//
//  Created by S M HEMEL on 12/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<assert.h>
using namespace std;
long long arr[100005];
int main() {
    int n, p;
    long long ans;
    
    cin>>n>>p;
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr[i] = ceil((double)arr[i]/(double)p);
    }
    sort(arr, arr+n);
    ans = (long long)arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]<=arr[i-1])
            arr[i] = arr[i-1]+1;
        ans += (long long)arr[i];
    }
    cout<<ans<<endl;
    return 0;
}
