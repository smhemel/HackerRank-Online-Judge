//
//  main.cpp
//  Hacker Rank - World CodeSprint 9 - Weighted Uniform Strings
//
//  Created by S M HEMEL on 1/27/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
#include<cstring>
#include <string>
using namespace std;
int arr[30];
map<int, bool>mp;
void solution()
{
    memset(arr, 0, sizeof(arr));
    mp.clear();
    string str;
    int n, x, len, temp, sum;
    char ch;
    cin >> str;
    len = (int)str.size();
    for(int i=0, j; i<len; )
    {
        ch = str[i];
        j = i;
        temp = 0;
        while(j<len && str[j] == str[i])
        {
            temp++;
            j++;
        }
        arr[ch-'a'] = max(arr[ch-'a'], temp);
        i = j;
    }
    for(int i=0; i<26; i++)
    {
        sum = 0;
        for(int k=0; k<arr[i]; k++)
        {
            sum = sum+i+1;
            mp[sum] = 1;
        }
    }
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(mp[x])
            printf("Yes\n");
        else
            printf("No\n");
    }
}
int main () {
    solution();
    return 0;
}
