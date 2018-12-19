//
//  main.cpp
//  SRBD Coding Contest 2018 - Frequency
//
//  Created by S M HEMEL on 16/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map<string, int> m;
vector<string>V;
void palindromeSubStrs(string s)
{
    int n = s.size();
    int R[2][n+1];
    s = "@" + s + "#";
    
    for (int j = 0; j <= 1; j++)
    {
        int rp = 0;   // length of 'palindrome radius'
        R[j][0] = 0;
        
        int i = 1;
        while (i <= n)
        {
            //  Attempt to expand palindrome centered at i
            while (s[i - rp - 1] == s[i + j + rp])
                rp++;
            R[j][i] = rp;
            int k = 1;
            while ((R[j][i - k] != rp - k) && (k < rp))
            {
                R[j][i + k] = min(R[j][i - k],rp - k);
                k++;
            }
            rp = max(rp - k,0);
            i += k;
        }
    }
    s = s.substr(1, n);
    //m[string(1, s[0])]=1;
    V.push_back(string(1, s[0]));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 1; j++)
            for (int rp = R[j][i]; rp > 0; rp--){
                //m[s.substr(i - rp - 1, 2 * rp + j)]=1;
                V.push_back(s.substr(i - rp - 1, 2 * rp + j));
            }
        //m[string(1, s[i])]=1;
        V.push_back(string(1, s[i]));
    }
}

string str;
int main()
{
    int test,n,M,x;
    char c;
    cin >> test;
    while(test--){
        cin >> n >> M;
        cin >> str;
        palindromeSubStrs(str);
        sort(V.begin(),V.end());
        /*map<string, int>::iterator ii;
         for (ii = m.begin(); ii!=m.end(); ++ii)
         V.push_back((*ii).first);*/
        while(M--){
            cin >> x >> c;
            int cnt = 0;
            for (auto cc: V[x])
                if(cc==c) cnt++;
            cout << cnt << endl;
        }
        V.clear();
    }
    return 0;
}
