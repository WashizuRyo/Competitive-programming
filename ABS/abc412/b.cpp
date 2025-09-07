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

int main () {
    string s, t;
    cin >> s >> t;

    for (int i = 1; i < s.size(); i++) {
        bool yes = false;
        if(isupper(s[i])) {
            rep(j, t.size()) {
                if (s[i - 1] == t[j]) {
                    yes = true;
                }
            }

            if (!yes) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}
