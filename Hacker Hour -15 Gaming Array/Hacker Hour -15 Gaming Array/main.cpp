//
//  main.cpp
//  Hacker Hour -15 Gaming Array
//
//  Created by S M HEMEL on 12/3/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int maxi = 0;
        int count = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x>maxi)
            {
                maxi = x;
                count++;
            }
        }
        if(count%2==1)
            cout<<"BOB"<<endl;
        else cout << "ANDY" <<endl;
    }
    return 0;
}
