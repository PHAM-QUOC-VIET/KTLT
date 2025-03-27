#include<bits/stdc++.h>
using namespace std;

#define ll long long

int find(vector<int> &v, int l, int r, int x) {
    int res;
    while (l <= r) {
        int m = (l + r) / 2;
        if (v[m] <= x) {
            res = m;
            l = m+1;
        }
        else r = m-1;
    }
    return res;
}

int main() {
    int n, l, c;
    cin >> n >> l >> c;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int steps = 0;
    for (int i = 0; i < n; i++) {
        int pos = find(v, i, n-1, c + v[i]);
        if (pos == n-1) break;
        steps++;
        i = pos-1;
    }
    cout << steps;
    return 0;
}
