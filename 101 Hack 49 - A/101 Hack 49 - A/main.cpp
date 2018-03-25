//
//  main.cpp
//  101 Hack 49 - A
//
//  Created by S M HEMEL on 5/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    long long int x,ans = 0;
    int test;
    cin >> test;
    for(int i=0; i<test; i++){
        cin >> x;
        ans *= x;
    }
    ans *= 4;
    long long int r = ans/1024;
    cout << r << endl;
    return 0;
}
