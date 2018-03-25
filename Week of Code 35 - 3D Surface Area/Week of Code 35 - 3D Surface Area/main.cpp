//
//  main.cpp
//  Week of Code 35 - 3D Surface Area
//
//  Created by S M HEMEL on 16/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#define ll long long int
using namespace std;
int arr[111][111];
int main(){
    for(int i=0; i<111; i++)
        for(int j=0; j<111; j++)
            arr[i][j] = 0;
    ll n,m,ans = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> arr[i][j];
    ans += ((n*m)*2LL);
    for(int i=0; i<m; i++)
        ans += (arr[0][i]+arr[n-1][i]);
    for(int i=0; i<n; i++)
        ans += (arr[i][0]+arr[i][m-1]);
    for(int i=0; i<n; i++)
        for(int j=0; j<m-1; j++)
            ans += abs(arr[i][j]-arr[i][j+1]);
    for(int i=0; i<m; i++)
        for(int j=0; j<n-1; j++)
            ans += abs(arr[j][i]-arr[j+1][i]);
    cout << ans << endl;
    return 0;
}
