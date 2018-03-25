//
//  main.cpp
//  HourRank 19
//
//  Created by S M HEMEL on 4/2/17.
//  Copyright © 2017 Bangladesh University of Business and Technology. All rights reserved.
//



//1st
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int a[100000];
int main()
{
    int n,cnt=0,x=1;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    int temp = a[0];
    for(int i=1; i<n; i++)
    {
        if(cnt==temp)
        {
            x++,cnt = 0;
            temp = a[i];
            i++;
        }
        cnt++;
    }
    cout << x << endl;
    return 0;
}
