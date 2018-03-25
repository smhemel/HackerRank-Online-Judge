//
//  main.cpp
//  Women's CodeSprint 5 - Easy Change
//
//  Created by S M HEMEL on 10/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int x,y;
        cin >> x >> y;
        int ans = y-x;
        if(ans%20==0 || ans%50==0)
            cout << 0 << endl;
        else {
            bool f = true;
            int t = ans;
            for(int i=0; i<10; t++,i++)
            {
                if(t%50==0 || t%20==0){
                    f = false;
                    int t1 = t-ans;
                    if(t1>9)
                        cout << "-1" << endl;
                    else{
                        cout << t1 << endl;
                    }
                    break;
                }
                int z = t%50;
                if(z%20==0)
                {
                    f = false;
                    int t1 = t-ans;
                    if(t1>9)
                        cout << "-1" << endl;
                    else{
                        cout << t1 << endl;
                    }
                    break;
                }
                
            }
            if(f) cout << "-1" << endl;
        }
    }
    return 0;
}
