//
//  main.cpp
//  University CodeSprint 4 -  Cubes and Cylinders
//
//  Created by S M HEMEL on 23/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define Siz 1111111
using namespace std;
int len[Siz],coy[Siz],rad[Siz],cap[Siz],same[Siz],s[Siz];
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> len[i];
    for(int i=0; i<n; i++) {cin >> same[i];
        coy[len[i]] = same[i];
    }
    for(int i=0; i<m; i++) cin >> rad[i];
    for(int i=0; i<m; i++) {cin >> s[i];
        cap[rad[i]] = s[i];
    }
    sort(len,len+n);
    sort(rad,rad+m);
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(coy[len[i]]<=0) continue;
        for(int k=0; k<m; k++){
            if(coy[len[i]]<=0) break;
            if(rad[k]>=len[i] && cap[rad[k]]>0){
                cnt += min(cap[rad[k]],coy[len[i]]);
                if(cap[rad[k]]==coy[len[i]]){
                    cap[rad[k]] = 0;
                    coy[len[i]] = 0;
                    break;
                }
                else if(cap[rad[k]]< coy[len[i]]){
                    coy[len[i]] -= cap[rad[k]];
                    cap[rad[k]] = 0;
                }
                else{
                    cap[rad[k]] -= coy[len[i]];
                    coy[len[i]] = 0;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
