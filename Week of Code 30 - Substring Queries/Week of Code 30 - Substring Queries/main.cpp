//
//  main.cpp
//  Week of Code 30 - Substring Queries
//
//  Created by S M HEMEL on 3/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

/*#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
string s[1000];
int lcs[2000][2000];
int main()
{
    int n,m;
    cin >> n >> m;
    getchar();
    for(int i=0; i<n; i++)
        getline(cin,s[i]);
    int x,y;
    for(int i=0; i<m; i++)
    {
        scanf("%d%d",&x,&y);
        string s1 = s[x];
        string s2 = s[y];
        int len = (int) s1.size();
        int len1 = (int) s2.size();
        if(len<len1){
            swap(len,len1);
            swap(s1,s2);
        }
        for(int i=1; i<=len; i++)
            for(int j=1; j<=len1; j++)
            {
                if(s1[i-1]==s2[j-1])
                    lcs[i][j] = lcs[i-1][j-1]+1;
                else
                    lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
            }
        cout << lcs[len][len1] << endl;
        memset(lcs,0,sizeof(lcs));
    }
    return 0;
}




//
//  main.cpp
//  LCS(longest Common Subsecquence)
//
//  Created by S M HEMEL on 12/10/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int DP[100][100],dir[100][100];
string X,Y;
int LCS(int i,int j)
{
    if(i==0||j==0)
        return 0;
    if(DP[i][j]!=-1)//এই স্টেটটি আগেই ক্যালকুলেট করা হয়ে গিয়েছে
        return DP[i][j];
    if(X[i-1]==Y[j-1])//ম্যাচিং পেলাম।
    {
        DP[i][j]=1+LCS(i-1,j-1);
        dir[i][j]=3;
    }
    else //ম্যাচ করেনি
    {
        int a=0,b=0;
        a=LCS(i-1,j);
        b=LCS(i,j-1);
        if(a>b) {
            DP[i][j]=a;
            dir[i][j]=2;
        }
        else {
            DP[i][j]=b;
            dir[i][j]=1;
        }
    }
    return DP[i][j];
}
int main()
{
    getline(cin,X);
    getline(cin,Y);
    memset(DP,-1,sizeof DP);
    memset(dir,-1,sizeof dir);
    int n = (int)X.size();
    int m = (int)Y.size();
    int k = LCS(n,m);
    string ans;
    cout<<"length of LCS:"<<k<<endl;
    while(1)
    {
        if(dir[n][m]==-1||n==0||m==0)
            break;
        if(dir[n][m]==3)
        {
            ans=ans+X[n-1];
            n--;
            m--;
        }
        else if(dir[n][m]==2)
            n--;
        else if(dir[n][m]==1)
            m--;
    }
    reverse(ans.begin(),ans.end());
    cout<<"LCS for given two strings is "<<ans<<endl;
}*/







/*#include<iostream>
#include<string.h>
#include <string>
using namespace std;
string s[50000];
int max(int a, int b)
{   return (a > b)? a : b; }
int LCSubStr(string X, string Y, int m, int n)
{
    int LCSuff[m+1][n+1];
    int result = 0;
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
            
            else if (X[i-1] == Y[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}
int main()
{
    
    int n,m;
    scanf("%d%d",&n,&m);
    getchar();
    for(int i=0; i<n; i++)
        getline(cin,s[i]);
    for(int i=0; i<m; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        string X = s[x];
        string Y = s[y];
        int len = (int)X.size();
        int len1 = (int)Y.size();
        cout << LCSubStr(X, Y, len, len1) << endl;
    }
    
    return 0;
}*/




#include <string>
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#include <cstdio>
using namespace std;
void findSubstrings ( const string & word , set<string> & substrings ) {
    int l = (int) word.length( ) ;
    for ( int start = 0 ; start < l ; start++ ) {
        for ( int length = 1 ; length < l - start + 1 ; length++ ) {
            substrings.insert ( word.substr( start , length ) ) ;
        }
    }
}

string lcs ( const string & first , const string & second ) {
    set<string> firstSubstrings , secondSubstrings ;
    findSubstrings ( first , firstSubstrings ) ;
    findSubstrings ( second , secondSubstrings ) ;
    set<string> common ;
    set_intersection ( firstSubstrings.begin( ) , firstSubstrings.end( ) ,
                           secondSubstrings.begin( ) , secondSubstrings.end( ) ,
                           inserter ( common , common.begin( ) ) ) ;
    vector<string> commonSubs ( common.begin( ) , common.end( ) ) ;
    sort ( commonSubs.begin( ) , commonSubs.end( ) , []( const string &s1 , const string &s2 ) { return s1.length( ) > s2.length( ) ;}) ;
    return *(commonSubs.begin( ));
}
string s[50000];
int main( ) {
    ios_base::sync_with_stdio(false);
    int n,m;
    scanf("%d%d",&n,&m);
    getchar();
    for(int i=0; i<n; i++)
        getline(cin,s[i]);
    for(int i=0; i<m; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        string s1 = s[x];
        string s2 = s[y];
        string s3 = lcs(s1,s2);
        cout << (int)s3.length() << endl;
    }
    return 0 ;
}
