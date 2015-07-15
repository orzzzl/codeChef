#include <bits/stdc++.h>
using namespace std;

int T;

int main () {
    cin >> T;
    while (T --) {
	int  a, b;
	cin >> a >> b; b--;
	int k = (a - b - 1) > b ? b : a - b - 1;
        long long ans = 1;
	for (int kk = 1; kk <= k; kk ++)
	    ans = ans * (a - kk) / kk;
	cout << ans << endl;
    }
    return 0;
}

