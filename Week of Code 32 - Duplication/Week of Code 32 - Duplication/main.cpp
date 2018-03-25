//
//  main.cpp
//  Week of Code 32 - Duplication
//
//  Created by S M HEMEL on 5/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s = "0",t = "1";
int a[1111];
int main()
{
    string str="";
    int test,Max = 0;
    cin >> test;
    for(int i=0; i<test; i++){
        cin >> a[i];
        if(Max<a[i])
            Max = a[i];
    }
    Max++;
    while((int)str.size()<=Max){
        str = s+t;
        t = t+s;
        s = str;
    }
    for(int i=0; i<test; i++)
        cout << s[a[i]] << endl;
    return 0;
}
