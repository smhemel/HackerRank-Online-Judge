//
//  main.cpp
//  Week of Code 35 - Triple Recursion
//
//  Created by S M HEMEL on 15/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int arr[101][101];
int main(){
    int n,m,x,i=0,k=0,l=0,ans = 0;
    cin >> n >> m >> x;
    ans = m;
    int temp = ans;
    for(l=0; l<n; l++){
        arr[i][l] = temp;
        temp--;
    }
    i++;
    l++;
    int p = i;
    for(int fill=1; fill<n; fill++){
        l = p;
        ans += x;
        int z = ans;
        for(; l<n; l++){
            arr[i][l] = z;
            z--;
        }
        z = ans;
        for(k=p-1; k>=0; k--){
            arr[i][k] = z-x-1;
            z-= x;
            z--;
        }
        i++;
        p++;
    }
    for(i=0; i<n; i++){
        for(l=0; l<n; l++)
            cout << arr[i][l] << " ";
        cout << endl;
    }
    return 0;
}
