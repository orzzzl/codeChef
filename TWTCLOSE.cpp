#include <bits/stdc++.h>
using namespace std;

int n, k;
string t;
int main () {
    scanf ("%d %d\n", &n, &k);
    bool rec [1005];
    int cnt = 0;
    memset (rec, 0, sizeof rec);
    for (int i = 0; i < k; i ++) {
        cin >> t;
	if (t == "CLOSEALL") {
	    memset (rec, 0, sizeof rec);
	    cnt = 0;
	    printf ("%d\n", 0);
	} else {
	    int idx;
	    cin >> idx;
	    if (rec [idx]) {
		cnt --;
		rec [idx] = 0;
	    } else {
		cnt ++;
		rec [idx] = 1;
	    }
	    printf ("%d\n", cnt);
	}
    }
    return 0;
}
