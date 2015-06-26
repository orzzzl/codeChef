#include <bits/stdc++.h>
using namespace std;

string sol (string t) {
    int p = 0;
    int q = t.size () - 1;
    if (q == 0) return t;
    if (t [p] == '(' && t [q] == ')') {p ++; q --;}
    int k = p;
    int cnt = 0;
    string le = "", ri = "", ttt = "";
    for (; k <= q; k ++) {
	if (t [k] == '(') cnt ++;
	if (t [k] == ')') cnt --;
	if (cnt == 0 && (t [k] == '+' || t [k] == '-' || t [k] == '/' || t [k] == '*' || t [k] == '^'))
	    break;
	le += t [k];
    }
    if (k > q) return le;
    ttt += t [k];
    k ++;
    for (; k <= q; k ++)
        ri += t [k];
    //   cout << le << endl << ri << endl << ttt << endl;
    return sol (le) + sol(ri) +  ttt;
}
int main () {
    int T;
    cin >> T;
    while (T --) {
	string s;
	cin >> s;
	cout << sol (s) << endl;
    }
    return 0;
}
