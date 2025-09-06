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
    string s, t;
    cin >> n >> s >> t;

    rep(i, n) {
        if (s[i] == '1' && t[i] == 'l' || s[i] == 'l' && t[i] == '1' || s[i] == '0' && t[i] == 'o' || s[i] == 'o' && t[i] == '0') {
            continue;
        } else if (s[i] != t[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
