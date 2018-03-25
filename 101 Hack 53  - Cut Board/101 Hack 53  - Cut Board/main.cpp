//
//  main.cpp
//  101 Hack 53  - Cut Board
//
//  Created by S M HEMEL on 2/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[111][111];
int m,n,A,B;
vector<int> ans;
void f(int x, int y){
    a[x][y] = 1;
    ans.push_back(x + 1);
    ans.push_back(y + 1);
}
void go(){
    for(int i=n-1; i>=0; i--)
        for (int j=0; j<m; j++)
            if (!a[i][j])
            {
                if(j<m-1 && !a[i][j+1]){
                    f(i, j);
                    f(i, j + 1);
                    return;
                }
                if(i==0 || a[i-1][j]){
                    cout << "NO";
                    exit(0);
                }
                f(i - 1, j);
                f(i, j);
                return;
            }
}

int main()
{
    cin >> n >> m >> A >> B;
    for(int i=0; i<A; i++) a[0][i] = 1;
    for(int i=0; i<B; i++) a[n-1][m-1-i] = 1;
    if ((n*m-A-B)%2 == 1) return 0 * puts("NO");
    for(int i=0; i<n*m-A-B; i+=2) go();
    cout << "YES\n" << ans.size() / 4 << '\n';
    for (int i = 0; i < ans.size(); i += 4)
        cout << ans[i] << ' ' << ans[i + 1] << ' ' << ans[i + 2] << ' ' << ans[i + 3] << '\n';
    return 0;
}
