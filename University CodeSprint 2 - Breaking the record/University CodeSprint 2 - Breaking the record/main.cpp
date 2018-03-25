//
//  main.cpp
//  University CodeSprint 2 - Breaking the record
//
//  Created by S M HEMEL on 2/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;
int a[10000];
int main()
{
    int n,cnt = 0,cnt1 = 0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    int max = a[0], min = a[0];
    for(int i=0; i<n; i++)
    {
        if(max<a[i]){
            cnt++;
            max = a[i];
        }
        if(min>a[i]){
            cnt1++;
            min = a[i];
        }
    }
    printf("%d %d\n",cnt,cnt1);
    return 0;
}
