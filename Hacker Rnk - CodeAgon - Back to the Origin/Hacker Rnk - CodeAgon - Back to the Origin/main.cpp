//
//  main.cpp
//  Hacker Rnk - CodeAgon - Back to the Origin
//
//  Created by S M HEMEL on 1/26/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<assert.h>
#include <cassert>
using namespace std;
typedef long long vlong;
void solution() {
    
    vlong x, y, n, ansx, ansy;
    cin>>x>>y;
    assert(x>=-1000000000 && x<=1000000000);
    assert(y>=-1000000000 && y<=1000000000);
    
    cin>>n;
    assert(n>=1 && n<=100000);
    
    ansx = x;
    ansy = y;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        assert(x>=-1000000000 && x<=1000000000);
        assert(y>=-1000000000 && y<=1000000000);
        x = x*-1;
        y = y*-1;
        ansx+=x;
        ansy+=y;
    }
    cout<<ansx<<" "<<ansy<<"\n";
}
int main () {
    solution();
    return 0;
}
