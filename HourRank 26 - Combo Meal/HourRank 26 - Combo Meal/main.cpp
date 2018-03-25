//
//  main.cpp
//  HourRank 26 - Combo Meal
//
//  Created by S M HEMEL on 2/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int test,a,b,c;
    cin >> test;
    while (test--) {
        cin >> a >> b >> c;
        cout << abs((c-b)-a) << endl;
    }
    return 0;
}
