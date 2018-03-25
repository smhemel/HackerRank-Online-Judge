//
//  main.cpp
//  HourRank 19 - What Are the Odds?
//
//  Created by S M HEMEL on 4/2/17.
//  Copyright © 2017 Bangladesh University of Business and Technology. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int sum[500005];
vector <int> v[131075];
int main()
{
    int n,m;
    cin >> n;
    v[0].push_back(0);
    for(int i=1; i<=n; i++)
    {
        cin >> m;
        sum[i] = sum[i-1]^m;
        v[sum[i]].push_back(i);
    }
    long long ans = 0;
    for(int i=1; i<=n; i++)
    {
        int x = sum[i]^sum[n];
        if (v[x].empty())
            continue;
        int idx = -1;
        int left = 0,right = (int)v[x].size()-1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (v[x][mid] <= i-1)
            {
                idx = mid;
                left = mid + 1;
            }
            else if (v[x][mid] > i - 1)
                right = mid - 1;
        }
        if (idx != -1)
            ans += idx + 1;
    }
    cout << ans << endl;
    return 0;
}
