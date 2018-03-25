//
//  main.cpp
//  Week of Code 34 - Once in a tram
//
//  Created by S M HEMEL on 7/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool check(int num) {
    int first=0,last = 0;
    string s = to_string(num);
    for(int i=0,j=(int)s.length()-1; i<j; i++,j--){
        first += s[i]-'0';
        last += s[j]-'0';
    }
    if(first==last)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    if(n<10)
        return 0 * puts("11");
    else if(n>99 && n<1001)
        return 0 * puts("1001");
    else if(n>9999 && n<100001)
        return 0 * puts("100001");
    for(int i=n+1; ; i++){
        if(check(i))
            return 0 * printf("%d\n",i);
    }
    return 0;
}
