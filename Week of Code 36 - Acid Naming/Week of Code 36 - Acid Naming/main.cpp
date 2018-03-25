//
//  main.cpp
//  Week of Code 36 - Acid Naming
//
//  Created by S M HEMEL on 5/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
string s1 = "hydro";
int main(){
    int n;
    cin >> n;
    while (n--) {
        bool f = true,f1 = true;
        cin >> s;
        if(s[s.size()-2]=='i' && s[s.size()-1]=='c')
            f = false;
        for(int i=0; i<5; i++)
            if(s[i]!=s1[i]){
                f1 = false;
                break;
            }
        if(!f && f1 && s.size()>=6) cout << "non-metal acid" <<endl;
        if(!f) cout << "polyatomic acid" << endl;
        else cout << "not an acid" << endl;
    }
    return 0;
}
