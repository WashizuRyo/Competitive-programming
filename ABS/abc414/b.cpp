#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
    int n;
    cin >> n;

    string s = "";
    vector<ll> l(n);
    vector<char> c(n);
    rep(i, n) cin >> c[i] >> l[i];

    rep(i, n) {
        rep(j, l[i]) {
            s.push_back(c[i]);
            if (s.length() > 100) {
                cout << "Too Long" << endl;
                return 0;
            }
        }
    }

    cout << s << endl;
}
