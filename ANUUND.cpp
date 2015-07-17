/*************************************************************************
	> File Name: ANUUND.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Fri Jul 17 03:04:18 2015
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


int main () {
    int tests;
    cin >> tests;
    while (tests --) {
        int n;
        scanf ("%d", &n);
        int x [n];
        REP (i, 0, n)
            scanf ("%d", x + i);
        sort (x, x + n);
        int lo = 0, hi = n - 1;
        int cnt = 0;
        while (cnt < n) {

            if (cnt % 2 == 0) {
                cout << x [lo] << " ";
                lo ++;
            } else {
                cout << x [hi] << " ";
                hi --;
            }
            cnt ++;
        }
    }
    return (0);
}
