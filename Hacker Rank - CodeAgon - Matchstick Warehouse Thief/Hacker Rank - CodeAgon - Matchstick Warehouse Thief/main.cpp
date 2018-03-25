//
//  main.cpp
//  Hacker Rank - CodeAgon - Matchstick Warehouse Thief
//
//  Created by S M HEMEL on 1/26/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
ll num[11];
int main()
{
    
    ll a,b,x,y;
    cin >> a >> b;
    for(ll i=0; i<b; i++)
    {
        cin >> x >> y;
        num[y] += x;
    }
    ll sum = 0;
    for(int i=10; i>=0; i--)
    {
        ll p = 0;
        if(num[i]!=0)
        {
            p = num[i];
            if(p>=a){
                sum += (a*i);
                cout << sum <<endl;
                return 0;
            }
            if(p<a)
            {
                sum += p*i;
                a = a-p;
            }
        }
    }
    cout << sum <<endl;
    return 0;
}
