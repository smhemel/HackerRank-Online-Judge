//
//  main.cpp
//  Week of Code 29 - Big Sorting
//
//  Created by S M HEMEL on 2/24/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// string sort
int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; cin >> a[i],i++);
    sort(a.begin(), a.end(), [](const string &left, const string &right)
    {
        if (left.size() != right.size())
            return left.size() < right.size();
        else
            return left < right;
    });
    for (const string &s : a)
        cout << s << '\n';
    return 0;
}
