//
//  main.cpp
//  101 Hack 45 - The Chosen One
//
//  Created by S M HEMEL on 1/18/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cassert>
#include <cstdio>
using namespace std;
int const N = 1234567;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
long long a[N], b[N];
int main()
{
    int n;
    assert(1 == scanf("%d", &n));
    for(int i=0; i<n; i++) {
        scanf("%lld",&a[i]);
        b[i] = a[i];
    }
    if (n == 1) {
        puts("2000000000000000000");
        return 0;
    }
    for(int i=1; i<n; i++)
        b[i] = gcd(b[i], b[i-1]);
    long long g = 0;
    for(int i=n-1; i>=0; i--)
    {
        long long cur = gcd(i==0 ? 0 : b[i-1],g);
        if (a[i] % cur != 0) {
            printf("%lld\n", cur);
            return 0;
        }
        g = gcd(g, a[i]);
    }
    return 0;
}
