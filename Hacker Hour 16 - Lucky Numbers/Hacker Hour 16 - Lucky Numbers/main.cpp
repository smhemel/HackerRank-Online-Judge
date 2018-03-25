//
//  main.cpp
//  Hacker Hour 16 - Lucky Numbers
//
//  Created by S M HEMEL on 1/3/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int test = 0; test<q; test++)
    {
        long n,temp;
        cin >> n;
        int flag=0;
        if(n<7 && ((n%4)!=0)) cout<<"No"<<endl;
        else if(((n%4)==0) || ((n%7)==0)) cout<<"Yes"<<endl;
        else
        {
            flag=0;
            int i=1;
            while(i<n)
            {
                temp = n;
                if((i%7)==0)
                    if((temp-i)%4==0)
                    {
                        flag = 1;
                        break;
                    }
                i++;
            }
            if(flag==0) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    return 0;
}
