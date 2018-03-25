//
//  main.cpp
//  Hacker Rank - HackerHour 15 Cats and a Mouse
//
//  Created by S M HEMEL on 12/3/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(abs(a-c)>abs(b-c)) cout << "Cat B" <<endl;
        else if(abs(a-c)<abs(b-c)) cout << "Cat A" <<endl;
        else cout << "Mouse C" <<endl;
    }
    return 0;
}
