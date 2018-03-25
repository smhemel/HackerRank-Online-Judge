//
//  main.cpp
//  Week of Code 33 - Pattern
//
//  Created by S M HEMEL on 6/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
string s;
int main()
{
    int test;
    cin >> test;
    while(test--){
        int cnt = 0;
        cin >> s;
        int len = (int)s.length();
        bool flag = true,f=true;
        for(int i=0; i<len; i++){
            if(s[i]=='1' && flag){
                flag = false;
                continue;
            }
            if(s[i]=='0' && !flag && f){
                f = false;
                continue;
            }
            if(s[i]=='1' && !flag && !f){
                cnt++;
                f = true;
                continue;
            }
            if(s[i]!='1' && s[i]!='0')
            {
                flag = true;
                f = true;
                continue;
            }
        }
        cout << cnt << endl;
        s.clear();
    }
    return 0;
}
