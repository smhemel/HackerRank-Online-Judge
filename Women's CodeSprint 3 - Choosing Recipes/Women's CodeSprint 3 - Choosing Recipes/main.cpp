//
//  main.cpp
//  Women's CodeSprint 3 - Choosing Recipes
//
//  Created by S M HEMEL on 3/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int m1[50],matrix[50][50],v[50];
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        memset(m1,0,sizeof(m1));
        memset(matrix,0,sizeof(matrix));
        memset(v,0,sizeof(v));
        int r,p,m,n;
        cin >> r >> p >> n >> m;
        for(int i=1; i<=m;cin >> m1[i],i++);
        for(int i=1; i<=p;cin >> v[i],i++);
        for(int i=1; i<=r; i++)
            for(int l=1; l<=p; l++)
                cin >> matrix[i][l];
        
    }
    return 0;
}
