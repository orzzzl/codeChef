#include <bits/stdc++.h>
using namespace std;

map <long long, long long> m;
long long ans (long long n) {
    if (n == 0)    return m [0] = 0;
    if (!m [n])
        return m [n] = max (n, ans(n / 2) + ans (n / 3) + ans (n / 4));
    else 
        return m [n];
}

int main () {
    long long n;
    while (cin >> n) cout << ans (n) << endl;
    return 0;
}
