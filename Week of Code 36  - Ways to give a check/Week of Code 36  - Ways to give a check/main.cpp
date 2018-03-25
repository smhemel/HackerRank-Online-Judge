//
//  main.cpp
//  Week of Code 36  - Ways to give a check
//
//  Created by S M HEMEL on 7/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
char c[100][100];
int main() {
    int n;
    cin >> n;
    while(n--){
        int p=0,p1=0,cnt = 0;
        for(int i=1; i<=8; i++)
            for(int j=1; j<=8; j++){
                cin >> c[i][j];
                if(c[i][j]=='k')
                    static_cast<void>(p = i),p1 = j;
            }
        for(int i=1; i<=8; i++)
            if(c[2][i]=='P')
                c[1][i] = 'P';
            for(int j=1; j<=8; j++){
                if(c[1][j]=='P'){
                    if(abs(1-p)==1 && abs(j-p1)==2) cnt++;
                    if(1==p) cnt+=2;
                    if(j==p1) cnt+=2;
                    if(abs(1-p)==abs(j-p1)) cnt+=2;
                }
            }
        cout << cnt << endl;
        memset(c,0,sizeof(c));
    }
    return 0;
}
