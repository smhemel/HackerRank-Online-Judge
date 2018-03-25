//
//  main.cpp
//  HourRank 21 - Sam's Numbers
//
//  Created by S M HEMEL on 6/2/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

const int md = 1000000009;
const long long mdmd = (long long) md * md;

const int N = 777;

int a[N][N], b[N][N], c[N][N];

int main() {
    long long s;
    int m, d;
    cin >> s >> m >> d;
    memset(a, 0, sizeof(a));
    for (int i = 0; i < m * m; i++) {
        if (i >= m) {
            a[i][i - m]++;
        } else {
            for (int j = 0; j < m; j++) {
                if (abs(i - j) <= d) {
                    a[i][j * m + j]++;
                }
            }
        }
    }
    memset(b, 0, sizeof(b));
    for (int i = 0; i < m * m; i++) {
        b[0][i * m + i] = 1;
    }
    s--;
    while (s > 0) {
        if (s & 1) {
            for (int i = 0; i < m * m; i++) {
                for (int j = 0; j < m * m; j++) {
                    long long sum = 0;
                    for (int k = 0; k < m * m; k++) {
                        sum += (long long) b[i][k] * a[k][j];
                        if (sum >= mdmd) {
                            sum -= mdmd;
                        }
                    }
                    c[i][j] = sum % md;
                }
            }
            for (int i = 0; i < m * m; i++) {
                for (int j = 0; j < m * m; j++) {
                    b[i][j] = c[i][j];
                }
            }
        }
        for (int i = 0; i < m * m; i++) {
            for (int j = 0; j < m * m; j++) {
                long long sum = 0;
                for (int k = 0; k < m * m; k++) {
                    sum += (long long) a[i][k] * a[k][j];
                    if (sum >= mdmd) {
                        sum -= mdmd;
                    }
                }
                c[i][j] = sum % md;
            }
        }
        for (int i = 0; i < m * m; i++) {
            for (int j = 0; j < m * m; j++) {
                a[i][j] = c[i][j];
            }
        }
        s >>= 1;
    }
    int ans = 0;
    for (int j = 0; j < m; j++) {
        ans = (ans + b[0][j]) % md;
    }
    printf("%d\n", ans);
    return 0;
}
