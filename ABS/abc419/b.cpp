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
    int q;
    cin >> q;
    multiset<int> b;
    vector<int> ans;

    rep(i, q) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            b.insert(x);
        } else {
            ans.push_back(*b.begin());
            b.erase(b.begin());
        }
    }

    rep(i, ans.size()) {
        cout << ans[i] << endl;
    }
}
