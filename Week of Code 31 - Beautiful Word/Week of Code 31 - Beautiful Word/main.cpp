//
//  main.cpp
//  Week of Code 31 - Beautiful Word
//
//  Created by S M HEMEL on 4/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    bool flag = true;
    cin >> s;
    int len = (int)s.length();
    for(int i=1; i<len; i++)
    {
        if((s[i]==s[i-1]) || ((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') && (s[i-1]=='a' || s[i-1]=='e' || s[i-1]=='i' || s[i-1]=='o' || s[i-1]=='u' || s[i-1]=='y')))
        {
            flag = false;
            break;
        }
    }
    if(flag)
        puts("Yes");
    else
        puts("No");
    return 0;
}
