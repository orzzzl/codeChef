/* 
 * File:   main.cpp
 * Author: zelengzhuang 
 */
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
#define rep(i,s,t) for(int i=(s);i<(t);i++)
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
const int INF = (int)1E9;
#define MAXN 600005
#define vv vector<int>
#define fill(x,v) memset(x,v,sizeof(x))
int n;
char g [1005][1005];
int memo [1005][1005];

int sol (int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= n)    return 3;
    if (memo [i][j] != -1)    return memo [i][j];
    if (g [i][j] == '#')    return 4;
    int a = sol (i, j + 1);
    int b = sol (i + 1, j);
    bool line = (a == 3 || a == 1);
    bool col = (b == 3 || b == 2);
    int ans;
    if (line && col)    ans = 3;
    if (line && !col)    ans = 1;
    if (!line && col)    ans = 2;
    if (!line && !col)    ans = 4;
    return memo [i][j] = ans;
}


int main () {
    int tests;
    freopen ("in", "r", stdin);
    scanf ("%d", &tests);
    while (tests --) {
        scanf ("%d", &n);
        for (int i = 0; i < n; i ++)
        {
            scanf ("%s", g + i);
        }
        fill (memo, -1);
        int ans = 0;
        rep (i, 0, n) rep (j, 0, n) {
            if (sol (i, j) == 3)    ans ++;
        }
        cout << ans << endl;
    }
    return 0;
}