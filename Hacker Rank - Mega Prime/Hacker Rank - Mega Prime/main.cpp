//
//  main.cpp
//  Hacker Rank - Mega Prime
//
//  Created by S M HEMEL on 2/24/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <ctime>
#include <cstdlib>
#define N 10000000
#define P cout << "asi" << endl;
using namespace std;
bool prime[200];
long int p = 0;
long int store[100000];
bool check(string s)
{
    int len = (int)s.length();
    cout << len;
    for(int l=0; l<len; l++)
    {
        cout << s[l];
        if(s[l]=='4' || s[l]=='1' || s[l]=='6' || s[l]=='8'|| s[l]=='9') {
            p = l;
            return false;
        }
    }
    return true;
}
long int c = 0;
void seive()
{
    for(long int i=3; i<150; i+=2)
    {
        string s1 = to_string(i);
        if(check(s1))
        {
            s1[p] = ((s1[p]-'0')+1)+'0';
            i = stol(s1);
            p = 0;
        }
        if(!prime[i])
        {
            string s = to_string(i);
            if(check(s))
            {
                store[c++] = i;
                for(long int j= i*i; j<150; j += (2*i))
                    prime[j] = 1;
            }
            else
            {
                s[p] = ((s[p]-'0')+1)+'0';
                i = stol(s);
                i -= 2;
                p = 0;
            }
        }
    }
}
int main(){
    seive();
    for(long int i=0; i<c; i++)
        cout << store[i] << endl;
    return 0;
}
