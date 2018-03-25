//
//  main.cpp
//  World CodeSprint 11 - Numeric String
//
//  Created by S M HEMEL on 5/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int power[300010];
int main()
{
    string s;
    int k,b,m,ans = 0,sum = 0;
    cin >> s;
    cin >> k >> b >> m;
    power[0] = 1;
    for(int i=1; i<=k; i++)
        power[i] = ((power[i-1]%m)*(b%m))%m;
    for(int i=0; i<k; i++){
        int temp = (power[k-i-1]%m)*((s[i]-'0')%m);
        ans = ((ans%m)+(temp%m))%m;
        sum = ans;
    }
    for(int i=0; i < s.size(); i++){
        int old_num = (((s[i-k]-'0')%m)*(power[k-1]%m))%m;
        sum = (((sum%m)-(old_num%m))+m)%m;
        sum = ((sum%m)*(b%m))%m;
        sum = ((sum%m)+((s[i]-'0')%m))%m;
        ans += sum;
    }
    cout << ans << endl;
    return 0;
}

