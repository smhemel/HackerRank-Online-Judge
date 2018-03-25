//
//  main.cpp
//  HourRank 20 - Hot and Cold
//
//  Created by S M HEMEL on 5/2/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(c>=b && c>=a && d>=b && d>=a)
        puts("YES");
    else
        puts("NO");
    return 0;
}
