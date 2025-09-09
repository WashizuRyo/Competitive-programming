#include <cctype>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>
#include <regex>
#include <vector>
#include <deque>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
    int q;
    cin >> q;
    deque<pair<ll, ll> > dq;

    rep(i, q) {
        ll type, c, x, k;
        cin >> type;
        if (type == 1) {
            cin >> c >> x;
            dq.push_back(make_pair(c, x));
        } else if (type == 2) {
            cin >> k;
            ll sum = 0;

            while(k > 0) {
                ll c = dq.front().first;
                ll x = dq.front().second;
                if (c <= k) {
                    k -= c;
                    sum += c * x;
                    dq.pop_front();
                } else if (c > k) {
                    sum += x * k;
                    dq.front().first -= k;
                    k = 0;
                }
            }

            cout << sum << endl;
        }
    }
}
