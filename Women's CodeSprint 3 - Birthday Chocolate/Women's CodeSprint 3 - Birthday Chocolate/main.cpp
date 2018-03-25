//
//  main.cpp
//  Women's CodeSprint 3 - Birthday Chocolate
//
//  Created by S M HEMEL on 3/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[101];
int main()
{
    int n,d,m;
    cin >> n;
    for(int i=1; i<=n; cin >> a[i],i++);
    cin >> d >> m;
    int cnt = 0,sum = 0;
    if(m==1)
    {
        for(int i=1; i<=n; i++)
            if(a[i]==d)
                cnt++;
    }
    else
    {
        for(int i=1,j=0; i<=n;)
        {
            j++;
            sum += a[i];
            if(j==m)
            {
                i-= m-1;
                if(sum==d)
                    cnt++;
                sum = 0;
                j=0;
            }
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}
