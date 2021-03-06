/*************************************************************************
	> File Name: b.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Apr 16 03:09:46 2015
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
#define MAXN 100005
#define vv vector<int>
#define FILL(x,v) memset(x,v,sizeof(x))

int pnum [100005];
void init () {
    pnum [0] = 0;
    pnum [1] = 0;
    pnum [2] = 1;
    REP (i, 2, 100005)
        pnum [i] = 1;
    REP (j, 2, 100005) {
        if (pnum [j]) {
            for (ll k = j; k <= MAXN / j; k ++)
                pnum [k * j] = 0;
        }
    }
    REP (i, 2, MAXN)
        pnum [i] += pnum [i - 1];
}

int main () {    
    init ();
    ll tests;
    cin >> tests;
    while (tests --) {
        ll i = 2;
        ll n, k, cnt (0);
        cin >> n >> k;
        if (!k)
        {
            cout << n * (n - 1) / 2 << endl;
            continue;
        }
        for (; i <= (n + k - 1); i ++) {
            ll r = n;
            ll l = i + k -1;
            while (l <= r) {
                ll mid = (l + r) / 2;
                ll xn = pnum [mid] - pnum [i - 1];
                if (xn > k) r = mid - 1;
                if (xn < k) l = mid + 1;
                if (xn == k) {
                    ll bp;
                    for (bp = mid; pnum [bp] == pnum [i - 1] + k; bp --);
                    cnt += (n - bp);
                    break;
                }
            }

        }

        cout << cnt << endl;
    }
    return (0);
}