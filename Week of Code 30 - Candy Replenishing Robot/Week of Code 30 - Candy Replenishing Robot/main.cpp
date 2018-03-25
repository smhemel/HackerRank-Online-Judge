//
//  main.cpp
//  Week of Code 30 - Candy Replenishing Robot
//
//  Created by S M HEMEL on 3/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int t;
    cin >> n >> t;
    int n1 = n;
    int c[t+5];
    for(int i = 0; i<t; i++)
        cin >> c[i];
    int add = 0;
    for(int i=0; i<t-1; i++)
    {
        n = n-c[i];
        if(n<5)
        {
            add = add+(n1-n);
            n = n1;
        }
    }
    cout << add << endl;
    return 0;
}
