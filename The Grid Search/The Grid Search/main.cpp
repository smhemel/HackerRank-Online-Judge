//
//  main.cpp
//  The Grid Search
//
//  Created by S M HEMEL on 8/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
string s[1111],str[1111];
int n,row,coloum,r,c;
bool dfs(int x,int y){
    for(int i=x,l=0; l<r; i++,l++)
        for(int j=y,k=0; k<c; k++,j++)
            if(s[i][j]!=str[l][k])
                return false;
    return true;
}
int main(){
    cin >> n;
    while(n--){
        row = 0, coloum = 0, r = 0, c = 0;
        cin >> row >> coloum;
        for(int i=0; i<row; i++) cin >> s[i];
        cin >> r >> c;
        for(int i=0; i<r; i++) cin >> str[i];
        bool f = true;
        for(int i=0; i<row; i++){
            for(int l=0; l<coloum; l++){
                if(s[i][l]==str[0][0])
                    if(dfs(i,l)){
                        puts("YES");
                        f = false;
                        break;
                    }
            }
            if(!f) break;
        }
        if(f) puts("NO");
        for(int i=0; i<row; i++) s[i].clear();
        for(int i=0; i<r; i++) str[i].clear();
    }
    return 0;
}
