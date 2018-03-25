//
//  main.cpp
//  Hacker Rank - Project Euler #168- Number Rotations
//
//  Created by S M HEMEL on 1/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
long long get_last_5_digits(long long n)
{
    int result, count=0;
    result = n%10;
    n=n/10;
    while(n>0 && count<4){
        count++;
        result = (n%10)*pow(10,count) + result;
        n = n/10;
    }
    return result;
    
}
int main()
{
    long long sum=0, last_digit, count, m;
    long long x,y,i;
    cin >> m;
    for(i=11; i<pow(10,m); i++)
    {
        x = i;
        y = x;
        count = -1;
        last_digit = x % 10;
        while(x>0){
            x = x/10;
            count++;
        }
        y = y/10;
        int last = last_digit * pow(10,count);
        x = last + y;
        if(x%i==0)
        {
            if(i > 99999)
                sum += get_last_5_digits(i);
            else
                sum += i;
            if(sum > 99999)
                sum = get_last_5_digits(sum);
        }
    }
    cout<<sum<<endl;
    return 0;
}
