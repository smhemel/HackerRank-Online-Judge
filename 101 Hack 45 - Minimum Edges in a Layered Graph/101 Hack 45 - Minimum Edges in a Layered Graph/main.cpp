//
//  main.cpp
//  101 Hack 45 - Minimum Edges in a Layered Graph
//
//  Created by S M HEMEL on 1/17/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (n < k || (k == 2 && n > 2))
        cout << -1 << '\n';
    else {
        int r = n - k;
        cout << k - 1 + 2 * r << '\n';
    }
}
