#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    for (scanf ("%d", &n); n --;) {
        int a ;
        ll b;
        scanf ("%d%lld", &a, &b);
        if (b == 0) {
            printf("%lld\n", 1);
            continue;
        }
        ll bb = (b - 1) % 4 + 1;
        int aa = a;
        for (int i = 1; i < bb; i ++)
            a *= aa;
        cout << a % 10 << endl;
    }
    return (0);
}