#include <bits/stdc++.h>
using namespace std;
/*
Problem : https://codeforces.com/gym/102881/problem/M

Note :
The code was modified to the correct solution by using prefix sum,
reducing the time complexity form O(n^2) to O(n) and avoiding recalculating the digit sum for every candidate number.
*/
inline void done() {
    string n;   
    cin >> n;
    int64_t s = {};
    for (char c : n) {
        s += c - '0';
    }
    int64_t _r = s;
    int64_t pref = {};
    for (int i = {}; i < (int)n.size(); ++i) {
        int64_t cur = pref;
        if (n[i] > '0') {
            cur += (n[i] - '0') - 1;
        }
        cur += 9 * (n.size() - i - 1);
        _r = max(_r, cur);
        pref += n[i] - '0';
    }
    cout << _r << '\n';  
}

int32_t main() {
    // file
    freopen("lis.in", "r", stdin);
    cin.tie(0)->sync_with_stdio(0);

    done();
    return 0;
}
