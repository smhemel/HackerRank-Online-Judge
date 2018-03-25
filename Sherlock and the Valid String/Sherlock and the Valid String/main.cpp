//
//  main.cpp
//  Sherlock and the Valid String
//
//  Created by S M HEMEL on 10/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int a[26],b[5];
set <int> store;
string s;
int main() {
    cin >> s;
    int cnt=0;
    for(int i=0; s[i]; i++)
        a[s[i]-'a']++;
    for(int i=0; i<26; i++){
        if(a[i]!=0) store.insert(a[i]);
        if(a[i]==1) cnt++;
    }
    int siz = (int)store.size();
    if(siz>2 || cnt>1) return 0 * puts("NO");
    if(siz==2){
        int k = 0;
        for(auto x: store){
            if(x==1) continue;
            b[k++] = x;
        }
        if(k==1) return 0 * puts("YES");
        if(abs(b[0]-b[1])>1) return 0 * puts("NO");
    }
    puts("YES");
    return 0;
}

