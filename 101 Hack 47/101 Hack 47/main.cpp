//
//  main.cpp
//  101 Hack 47
//
//  Created by S M HEMEL on 3/21/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[100011];
int b[100011];
bool check[100011];
int main()
{
    int n,j=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
        if(check[x]==0)
        {
            b[j++] = x;
            check[x] = 1;
        }
    }
    for(int i=0; i<j; i++)
    {
        if(a[b[i]]>=2)
            return 0* puts("NO");
    }
    puts("YES");
    return 0;
}
