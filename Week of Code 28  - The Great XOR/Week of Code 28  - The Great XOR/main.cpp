//
//  main.cpp
//  Week of Code 28  - The Great XOR
//
//  Created by S M HEMEL on 1/10/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    while(n--)
    {
        long long int b,count=0;
        cin >> b;
        for(long long int i=1; i<b; i++)
            if((i^b)>b)
                count++;
        cout << count << endl;
    }
    return 0;
}
