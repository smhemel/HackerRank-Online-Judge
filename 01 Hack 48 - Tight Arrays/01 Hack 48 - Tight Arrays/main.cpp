//
//  main.cpp
//  01 Hack 48 - Tight Arrays
//
//  Created by S M HEMEL on 4/22/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << 1 + abs(a - b) + abs(b - c) << endl;
    return 0;
}
