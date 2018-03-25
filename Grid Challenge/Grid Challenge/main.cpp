//
//  main.cpp
//  Grid Challenge
//
//  Created by S M HEMEL on 8/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string s[111],str;
int main(){
    int test,n;
    cin >> test;
    while (test--) {
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> str;
            sort(str.begin(),str.end());
            s[i] = str;
        }
        bool f = true;
        for(int i=0; i<n; i++){
            for(int l=1; l<n; l++)
                if(s[l][i]<s[l-1][i]){
                    f = false;
                    puts("NO");
                    break;
                }
            if(!f) break;
        }
        if(f) puts("YES");
        for(int i=0; i<n; i++) s[i].clear();
        str.clear();
    }
    return 0;
}
