//
//  main.cpp
//  World CodeSprint 10 - Reward Points
//
//  Created by S M HEMEL on 4/29/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,y;
    cin >> n >> m >> y;
    int sum = 0;
    sum += ((n*10)>=100) ? 100 : (n*10);
    sum += ((m*10)>=100) ? 100 : (m*10);
    sum += ((y*10)>=100) ? 100 : (y*10);
    cout << sum << endl;
    return 0;
}
