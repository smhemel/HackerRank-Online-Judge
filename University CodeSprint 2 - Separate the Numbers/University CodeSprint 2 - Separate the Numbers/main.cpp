//
//  main.cpp
//  University CodeSprint 2 - Separate the Numbers
//
//  Created by S M HEMEL on 2/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdint>
#include <algorithm>
#include <cstdlib>
using namespace std;
bool find(const string& s, const string& s1)
{
    if (s1[0] == '0')
        return false;
    size_t len = 1;
    uint64_t v = stoll(s1);
    string t = s1;
    while (t.size() < s.size())
    {
        len += 1;
        v += 1;
        t += to_string(v);
    }
    if (s != t)
        return false;
    if (len < 2)
        return false;
    return true;
}
bool IsPossible(const string& s, uint64_t& start)
{
    for (size_t i=1; i<=16; i++)
    {
        if(i>s.size())
            break;
        const string s1 = s.substr(0, i);
        if (find(s, s1)) {
            start = stoll(s1);
            return true;
        }
    }
    return false;
}
int main()
{
    size_t test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        uint64_t start;
        if (IsPossible(s, start))
            cout << "YES " << start << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
