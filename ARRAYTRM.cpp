/*************************************************************************
	> File Name: ARRAYTRM.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sun Jul  5 20:45:38 2015
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

int tests;

int main () {
    cin >> tests;
    while (tests --) {
        int n, k;
        cin >> n >> k;
        int x [n];
        int sum = 0;
        map <int, int> mm;
        for (int i = 0; i < n; i ++) {
            cin >> x [i];
            if (x [i] == 0)    sum ++;
            mm [x [i] % (k + 1)] ++;
        }
        if (sum == n - 1 || n == 2) {
            cout << "YES\n";
            continue;
        }
        sum = 0;
        bool ans = 1;
        bool au = 0;
        for (auto it = mm.begin (); it != mm.end (); it ++) {
            if (it -> second != 0)
                sum ++;
            if (it -> second == 1 || it -> second == n - 1)
                au = 1;
        }
        if (sum > 2)    ans = 0;
        if (sum == 2 && !au) ans = 0;
        if (ans)    cout << "YES\n";
        else       cout << "NO\n";
    }
    return (0);
}
