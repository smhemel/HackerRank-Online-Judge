//
//  main.cpp
//  HourRank 20 - Counting Perfect Subsequences
//
//  Created by S M HEMEL on 5/2/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
char s[500000];
bool c[500];
string str;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
       // int l = 0;
        cin >> s;
        int len = (int)strlen(s);
        /*for(int i=0; i<len; i++)
            if(c[s[i]]==0){
                s1[l++] = s[i];
                c[s[i]] = 1;
            }*/
        sort(s,s+len);
        for(int i=0; i<len-1; i++){
            int x = s[i];
            int y = s[i+1];
            if((y-x)==0)
                continue;
            if((y-x)!=1)
                s[i] = '.';
        }
        for(int i=0; i<len; i++){
            if(s[i]!='.')
                str += s[i];
        }
        int cnt = 1,z = 2;
        int len1 = (int)str.length();
        while (z!=len1)
        {
            cnt += (int)(len1/2);
            z+=z;
        }
        cout << cnt << endl;
        memset(s,0,sizeof(s));
        memset(s,0,sizeof(s));
        memset(c,0,sizeof(c));
        str.clear();
    }
    return 0;
}
