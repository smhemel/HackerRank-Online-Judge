//
//  main.cpp
//  Week of Code 28 - Boat Trips
//
//  Created by S M HEMEL on 1/10/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int ar[1000];
    cin >> a >> b >> c;
    for(int i=0; i<a; i++)
        cin >> ar[i];
    int total = b*c;
    bool flag = true;
    for(int i=0; i<a; i++)
        if(ar[i]>total) {
            flag = false;
            break;
        }
    if(flag==false)
        cout << "No" <<endl;
    else
        cout << "Yes" <<endl;
    return 0;
}
