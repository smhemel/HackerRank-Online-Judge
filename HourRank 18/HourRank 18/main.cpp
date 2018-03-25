//
//  main.cpp
//  HourRank 18
//
//  Created by S M HEMEL on 3/2/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//


//Where's the Marble?
/*#include <iostream>
#include <map>
using namespace std;
map <int ,int> M;
int main()
{
    int n,m,x,y,position = 0;
    cin >> n >> m;
    position = n;
    for(int i=0; i<m ; i++)
    {
        cin >> x >> y;
        if(x==position){
            position = y;
            
        }
        else if(y==position)
            position = x;
    }
    cout << position << endl;
    return 0;
}*/



#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string s;
long long memoize[100002][5];
long long f(int i, int m){
    if(i == (int)s.size())
        return 0;
    if(memoize[i][m] != -1)
        return memoize[i][m];
    int x=s[i]-'0';
    long int ans = f(i + 1, (m + x) % 3) + ((x + m) % 3 == 0 and x % 2 == 0);
    return memoize[i][m] = ans;
}

int main(){
    memset(memoize, -1, sizeof memoize);
    long long cnt=0;
    cin >> s;
    for(int i=0; i<(int)s.size(); i++) {
        if(s[i] == '0') cnt++;
        else cnt += f(i,0);
    }
    cout << cnt << endl;
    return 0;
}
