//
//  main.cpp
//  Week of Code 33 - Twin Arrays
//
//  Created by S M HEMEL on 6/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[100010],b[100010];
int main()
{
    int n,p=0,p1=0;
    int Min = INT_MAX;
    int Min1 = INT_MAX;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(Min>a[i]){
            p = i;
            Min = a[i];
        }
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
        if(Min1>b[i]){
            p1 = i;
            Min1 = b[i];
        }
    }
    sort(a,a+n);
    sort(b,b+n);
    if(p!=p1){
        return 0 * printf("%d\n",Min+Min1);
    }
    else
        printf("%d\n", (Min1+a[1]<Min+b[1]) ? Min1+a[1] : Min+b[1]);
    return 0;
}
