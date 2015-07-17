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

int main () {
    freopen ("in", "r", stdin);
    int tests;
    cin >> tests;
    while (tests --) {
        int n, m;
        cin >> n >> m;
        int x [n];
        int sums = 0;
        rep (i, 0, n)    { cin >> x [i];  sums += x [i];}
        sort (x, x + n);
        if (x [n - 1] * n > sums + m)    {cout << "No\n";    continue;}
        if ((sums + m) % n == 0)    cout << "Yes\n";
        else cout << "No\n";        
    }
    
    return 0;
}