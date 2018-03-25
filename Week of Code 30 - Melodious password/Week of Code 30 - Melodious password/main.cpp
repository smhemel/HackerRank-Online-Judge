//
//  main.cpp
//  Week of Code 30 - Melodious password
//
//  Created by S M HEMEL on 3/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
string s = "bcdfghjklmnpqrstvwxz";
string s1 = "aeiou";
int main ()
{
    int n;
    cin >> n;
    if(n==1)
    {
        for(int i=0; i<20; cout << s[i] <<endl,i++);
        for(int i=0; i<5; cout << s1[i] <<endl,i++);
        return 0;
    }
    if(n==2)
    {
        for(int i=0; i<20; i++)
            for(int l=0; l<5; l++)
                cout << s[i] << s1[l] << endl;
        for(int i=0; i<5; i++)
            for(int l=0; l<20; l++)
                cout << s1[i] << s[l] << endl;
        return 0;
    }
    if(n==3)
    {
        for(int i=0; i<20; i++)
            for(int l=0; l<5; l++)
                for(int j=0; j<20; j++)
                    cout << s[i] << s1[l] << s[j] << endl;
        for(int i=0; i<5; i++)
            for(int l=0; l<20; l++)
                for(int j=0; j<5; j++)
                    cout << s1[i] << s[l] << s1[j] << endl;
        return 0;
    }
    if(n==4)
    {
        for(int i=0; i<20; i++)
            for(int l=0; l<5; l++)
                for(int j=0; j<20; j++)
                    for(int k=0; k<5; k++)
                        cout << s[i] << s1[l] << s[j] << s1[k] << endl;
        for(int i=0; i<5; i++)
            for(int l=0; l<20; l++)
                for(int j=0; j<5; j++)
                    for(int k=0; k<20; k++)
                        cout << s1[i] << s[l] << s1[j] << s[k] << endl;
        return 0;
    }
    if(n==5)
    {
        for(int i=0; i<20; i++)
            for(int l=0; l<5; l++)
                for(int j=0; j<20; j++)
                    for(int k=0; k<5; k++)
                        for(int m=0; m<20; m++)
                        cout << s[i] << s1[l] << s[j] << s1[k] << s[m] << endl;
        for(int i=0; i<5; i++)
            for(int l=0; l<20; l++)
                for(int j=0; j<5; j++)
                    for(int k=0; k<20; k++)
                        for(int m=0; m<5; m++)
                            cout << s1[i] << s[l] << s1[j] << s[k] << s1[m] << endl;
        return 0;
    }
    if(n==6)
    {
        for(int i=0; i<20; i++)
            for(int l=0; l<5; l++)
                for(int j=0; j<20; j++)
                    for(int k=0; k<5; k++)
                        for(int m=0; m<20; m++)
                            for(int n=0; n<5; n++)
                                cout << s[i] << s1[l] << s[j] << s1[k] << s[m] << s1[n] <<endl;
        for(int i=0; i<5; i++)
            for(int l=0; l<20; l++)
                for(int j=0; j<5; j++)
                    for(int k=0; k<20; k++)
                        for(int m=0; m<5; m++)
                            for(int n=0; n<20; n++)
                                cout << s1[i] << s[l] << s1[j] << s[k] << s1[m] << s[n] << endl;
        return 0;
    }
    return 0;
}
