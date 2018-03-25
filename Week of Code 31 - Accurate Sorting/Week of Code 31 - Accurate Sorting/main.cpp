//
//  main.cpp
//  Week of Code 31 - Accurate Sorting
//
//  Created by S M HEMEL on 4/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        bool flag = true,f2 = true;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        while(true)
        {
            flag = false;
            f2 = true;
            for(int i=1; i<n; i++){
                if(abs(a[i]-a[i-1])==1 && a[i]<a[i-1])
                    swap(a[i-1],a[i]);
                if(i!=1 && !flag && a[i-1]<a[i-2] && abs(a[i-1]-a[i-2])==1)
                    flag = true;
            }
            if(!flag)
                break;
        }
        flag = true;
        for(int i=n-2; i>=0; i--)
            if(a[i+1]-a[i]!=1){
                puts("No");
                flag = false;
                break;
            }
        if(flag)
            puts("Yes");
    }
    return 0;
}
