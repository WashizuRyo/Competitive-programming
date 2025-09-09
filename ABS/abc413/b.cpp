#include <cctype>
#include <set>
#include <algorithm>
#include <iostream>
#include <regex>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> t(n);

    rep(i, n) cin >> t[i];
    set<string> s;

    rep(i, n) {
        rep(j, n) {
            if (i == j) continue;

            s.insert(t[i] + t[j]);
        }
    }

    cout << s.size() << endl;
    return 0;
}
