//
//  main.cpp
//  World CodeSprint 11 - Balanced Array
//
//  Created by S M HEMEL on 5/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,x;
    int sum = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        if(i<=n/2)
            sum += x;
        else
            sum -= x;
    }
    cout << abs(sum) << endl;
    return 0;
}
