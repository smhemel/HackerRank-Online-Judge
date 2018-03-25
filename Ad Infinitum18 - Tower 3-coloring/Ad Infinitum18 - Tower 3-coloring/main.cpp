//
//  main.cpp
//  Ad Infinitum18 - Tower 3-coloring
//
//  Created by S M HEMEL on 6/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int n = 0,sum = 1;
    cin >> n;
    long long int total = pow(3,n);
    for(int i=0; i<total; i++){
        sum *= 3;
        sum %= 1000000007;
    }
    cout << sum << endl;
    return 0;
}
