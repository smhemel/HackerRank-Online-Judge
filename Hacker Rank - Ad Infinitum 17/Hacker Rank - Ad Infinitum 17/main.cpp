//
//  main.cpp
//  Hacker Rank - Ad Infinitum 17
//
//  Created by S M HEMEL on 12/31/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int j,a[100],b[100],s,u,d,w[100],i,n,e;
    int o=0;
    long m,p;
    scanf("%ld",&p);
    for(s=1;s<p-1;s++)
    {
        d=a[s];
        u=s-1;
        while(u>=0 && a[u]>d)
        {
            a[u+1]=a[u];
            u--;
        }
        a[u+1]=d;
    }
    for (i=0; i < p-1; i++)
        n=0;
        i=p-2;
    while(i>=0 && a[i]==b[i])
    {
        n++;
        i=i-1;
    }
    if ( n==(p-1))
        w[j]=j;
    else w[j]=0;
                                                                                            
}

