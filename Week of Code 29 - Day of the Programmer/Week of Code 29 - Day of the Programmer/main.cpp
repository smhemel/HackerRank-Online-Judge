//
//  main.cpp
//  Week of Code 29 - Day of the Programmer
//
//  Created by S M HEMEL on 2/20/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int year;
    cin >> year;
    if(!(year%400) ||(year%100 && !(year%4)))
        cout << "12.09." << year <<endl;
    else
        cout << "13.09." << year <<endl;
    return 0;
}
