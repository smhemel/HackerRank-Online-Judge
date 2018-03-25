//
//  main.cpp
//  Ad Infinitum18 - Pythagorean Triple
//
//  Created by S M HEMEL on 6/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <map>
#define ll unsigned long long int
using namespace std;
map <ll,int> m;
int main()
{
    for(ll i=1; i<=2000000; i++){
        m[i*i] = 1;
    }
    ll n;
    cin >> n;
    for(ll i=n+1; i<=2000000;i++){
        ll x = n*n + i*i;
        if(m[x]==1){
            return 0 * printf("%lld %lld %lld\n",n,i,(ll)sqrt(x));
        }
    }
    return 0;
}
