//
//  main.cpp
//  HourRank 21 - A
//
//  Created by S M HEMEL on 6/2/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int d[100000],a,c[1000000];
int main()
{
    int n,x,p = 0,Min = INT_MAX;
    cin >> n >> x;
    for(int i=0; i<n; i++)
        cin >> d[i];
    for(int i=0; i<n; i++)
    {
        cin >> a;
        int temp = abs(x-d[i]);
        int t = temp/a;
        c[t]++;
        if(Min>t){
            Min = t;
            p = i;
        }
    }
    if(c[Min]>1)
        puts("-1");
    else
        cout << p << endl;
    return 0;
}
