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
int memo [105][105];
int vals [105][105];

int sol (int start, int end) {
    if (start == end)    return 0;
    if (memo [start][end] != -1)    return memo [start][end];
    int ans = INF;
    rep (i, start, end) {
        int tmp = sol (start, i) + sol (i + 1, end) + (vals [start][i] * vals [i + 1][end]);
        if (tmp < ans) {
            ans = tmp;
            vals [start][end] = (vals [start][i] + vals [i + 1][end]) % 100;
        }
    }
    return memo [start][end] = ans;       
}

int main () {
    freopen ("in", "r", stdin);
    while (scanf ("%d", &n) == 1) {
        fill (vals, 0);
        rep(i, 0, n)    scanf ("%d", &vals [i][i]);
        fill (memo, -1);
        printf ("%d\n", sol (0, n - 1));
    }
}