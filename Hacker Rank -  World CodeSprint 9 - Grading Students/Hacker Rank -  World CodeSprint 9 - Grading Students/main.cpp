//
//  main.cpp
//  Hacker Rank -  World CodeSprint 9 - Grading Students
//
//  Created by S M HEMEL on 1/27/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,a[100],x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x<38){
            a[i] = x;
            continue;
        }
        if((x+1)%5==0){
            a[i]=x+1;
            continue;
        }
        if((x+2)%5==0)
            a[i]=x+2;
        else
            a[i] = x;
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] <<endl;
    }
    return 0;
}
