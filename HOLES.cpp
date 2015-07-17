/*************************************************************************
	> File Name: HOLES.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Fri Jul 17 02:51:31 2015
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

char *ss = "AOPQRD";

int main () {
    int tests;
    cin >> tests;
    while (tests --) {
        string tmp;
        cin >> tmp;
        int ans = 0;
        for (int i = 0; i < tmp.length (); i ++) {
            if (tmp [i] == 'B') {
                ans += 2;
            } else if (find (ss, ss + 6, tmp [i]) != ss + 6) {
                ans ++;
            }
        }
        cout << ans << endl;
    }
    return (0);
}
