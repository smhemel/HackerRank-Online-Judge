//
//  main.cpp
//  Hacker Rank - Drawing Book
//
//  Created by S M HEMEL on 12/22/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,m,count=0,count1=0,m1 = 0;
    cin >> n >> m;
    if(n%2==0)
        m1 = n-1;
    else
        m1 = n-2;
    if((n%2==1 && (m==1 ||m==0 || m==n || m==(n-1)))||(n%2==0 && m==n))
        cout << "0" <<endl;
    else
    {
        for(int i=2; i<m1; i+=2)
        {
            if(i!=m && i+1!=m)
                count++;
            else
            {
                count++;
                break;
            }
        }
        for(int l=m1; l>=(m1/2)+1; l-=2)
        {
            if(l!=m && (l-1)!=m)
                count1++;
            else
            {
                count1++;
                break;
            }
                
        }
        if(count<count1)
            cout << count <<endl;
        else
            cout << count1 <<endl;
    }
    return 0;
}
