//
//  main.cpp
//  Women CodeSprint 3 - ASCII Flower
//
//  Created by S M HEMEL on 3/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    while (cin >> n >> m)
    {
        while(n--){
            for(int i=0; i<m; i++)
                cout << "..O..";
            cout << endl;
            for(int i=0; i<m; i++)
                cout << "O.o.O";
            cout << endl;
            for(int i=0; i<m; i++)
                cout << "..O..";
            cout << endl;
        }
    }
    return 0;
}
