#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int x = 1,inc = 1;
    for(int i=0; i<n ;i++){
        int t = x;
        int inc2 = 1;
        int temp = m;
        cout << temp;
        t--;
        for(int j=1; j<n; j++){
            if(t>0){
                temp--;
                cout << " " << temp;
                t--;
            }
            else{
                temp += inc2;
                cout << " " << temp;
            }
            inc2 += 2;
        }
        cout << endl;
        inc += 2;
        m += inc;
        x++;
    }
    return 0;
}

