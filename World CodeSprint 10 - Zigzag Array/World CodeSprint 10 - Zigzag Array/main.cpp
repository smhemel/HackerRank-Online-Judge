//
//  main.cpp
//  World CodeSprint 10 - Zigzag Array
//
//  Created by S M HEMEL on 4/29/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//


#include <iostream>
using namespace std;
int a[1000];
int main()
{
    int n,cnt=0;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    for(int i=0; i<n-2; i++)
    {
            if((a[i]>a[i+1] && a[i+1]>a[i+2]) or (a[i]<a[i+1] && a[i+1]<a[i+2]))
            {
                i--,cnt++;
                for(int l = i; l<n; l++)
                    a[l] = a[l+1];
                n--;
            }
    }
    cout << cnt << endl;
    return 0;
}
