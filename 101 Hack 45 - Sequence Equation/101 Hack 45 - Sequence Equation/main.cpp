//
//  main.cpp
//  101 Hack 45 - Sequence Equation
//
//  Created by S M HEMEL on 1/17/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,a[100];
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    int x,y;
    for(int i=1; i<=n; i++)
    {
        x = 0,y=0;
        for(int l=1; l<=n; l++)
            if(a[l]==i)
            {
                x = l;
                break;
            }
        for(int k=1; k<=n; k++)
            if(a[k]==x){
                y = k;
                break;
            }
        cout << y << endl;
    }
    return 0;
}
