//
//  main.cpp
//  University CodeSprint 4 - Maximum Permutation
//
//  Created by S M HEMEL on 23/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
using namespace std;
int lps[1011111];
char s[1011111];
vector<string>vs,v_ans;
string text,pattern;
void get_lps(int len1)
{
    int i=0,j=1;
    lps[0] = 0;
    while(j<len1)
    {
        if(pattern[i]==pattern[j]){
            lps[j] = i+1;
            static_cast<void>(j++),i++;
        }
        else {
            if(i==0) static_cast<void>(lps[j] = 0),j++;
            else i = lps[i-1];
        }
    }
}
bool kmp(int len, int len1)
{
    int i=0,j=0;
    while (i<len)
    {
        if(text[i]==pattern[j])
            static_cast<void>(i++),j++;
        if (j==len1) return true;
        else if(pattern[j] != text[i]) {
            if(j==0) i++;
            else j = lps[j-1];
        }
    }
    return false;
}

void swap(char *x,char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutation(char *s, int i, int n) {
    int j;
    if(i==n){
        string st = "";
        for(int i=0; s[i]; i++)
            st += s[i];
        vs.push_back(st);
    }
    else {
        for(j=i; j<=n; j++)
        {
            swap(s+i,s+j);
            permutation(s,i+1,n);
            swap(s+i,s+j);
        }
    }
}
void clean(){
    text.clear();
    pattern.clear();
    memset(s,0,sizeof(s));
    vs.clear();
    v_ans.clear();
    memset(lps,0,sizeof(lps));
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        clean();
        cin >> pattern;
        for(int i=0; pattern[i]; i++) s[i] = pattern[i];
        cin >> text;
        int len = (int)text.size();
        int len1 = (int)pattern.size();
        permutation(s,0,(len1-1));
        int vector_si = (int)vs.size();
        bool flag = false;
        for(int i=0; i<vector_si; i++){
            memset(lps,0,sizeof(lps));
            get_lps((int)vs[i].size());
            if(kmp(len, (int)vs[i].size())){
                v_ans.push_back(vs[i]);
                flag = true;
            }
        }
        if(!flag) puts("-1");
        else {
            cout << pattern << endl;
        }
    }
    return 0;
}
