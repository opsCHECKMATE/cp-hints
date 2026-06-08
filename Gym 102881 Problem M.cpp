#include <bits/stdc++.h>
using namespace std;

inline void done() {
    auto fun=[&](string s) {
        int64_t r = {};
        for(char c : s) {
            r += (c - '0');
        }
        return r;
    };
    string n;
    cin >> n;
    int64_t r = fun(n);
    for(int i = {}; i < (int)n.size(); ++i) {
        if(n[i] == '0') {
            continue;
        }
        string cur = n;
        cur[i]--;
        for(int j = i + 1; j < (int)cur.size(); ++j) {
            cur[j] = '9';
        }
        r = max(r, fun(cur));
    }
    cout << r << '\n';
}
int32_t main() {
    freopen("lis.in", "r", stdin);
    cin.tie(0)->sync_with_stdio(0);

    done();
    return 0;
}
