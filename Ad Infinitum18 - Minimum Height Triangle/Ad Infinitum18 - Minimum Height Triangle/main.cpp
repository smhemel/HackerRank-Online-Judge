//
//  main.cpp
//  Ad Infinitum18 - Minimum Height Triangle
//
//  Created by S M HEMEL on 6/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n,a;
    cin >> n >> a;
    double h = (a*2);
    if((int(h)%int(n))==0){
        cout << (int)(h/n) << endl;
    }
    else
        cout << ceil((double)(a*2)/n) << endl;
    return 0;
}
