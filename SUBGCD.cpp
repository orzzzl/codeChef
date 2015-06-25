/*************************************************************************
	> File Name: b.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Mar 14 01:09:19 2015
 ************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#include <complex>
#include <ctime>
#include <cassert>
#include <functional>
#include <algorithm>
using namespace std;

typedef long long ll;
#define REP(i,s,t) for(int i=(s);i<(t);i++)
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
const int INF = (int)1E9;
#define MAXN 600005
#define vv vector<int>
#define FILL(x,v) memset(x,v,sizeof(x))

int gcd (int x, int y) {
    if (y == 0) return x;
    else return gcd (y, x % y);
}

int main () {
    int t;
    scanf ("%d", &t);
    REP (i, 0, t) {
        int n;
        scanf ("%d", &n);
        int a[MAXN];
        REP (j, 0, n)
            scanf ("%d", a + j);
        int cc = gcd (a[0], a[1]);
        REP (m, 1, n - 1)
        {
            cc = gcd (cc, a[m + 1]);
        }
        if (cc == 1)
            printf ("%d\n", n);
        else
            printf ("%d\n", -1);
    }
    return (0);
}