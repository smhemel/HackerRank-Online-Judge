//
//  main.cpp
//  101 Hack 49 - Cartesian Country
//
//  Created by S M HEMEL on 5/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    
    long long x1, y1, x2, y2, cx, cy, ans, x, y;
    cin>>x1>>y1>>x2>>y2>>cx>>cy;
    
    x = min(abs(x1-cx)+1, abs(x2-cx)+1);
    y = min(abs(y1-cy)+1, abs(y2-cy)+1);
    ans = (2LL*y-1LL)*x - y;
    
    cout<<ans<<endl;
    
    return 0;
}
