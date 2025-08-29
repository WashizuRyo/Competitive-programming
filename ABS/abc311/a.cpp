#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    bool a = false, b = false, c = false;
    rep(i, n) {
        if (s[i] == 'A') {
            a = true;
        } else if (s[i] == 'B') {
            b = true;
        } else if (s[i] == 'C') {
            c = true;
        }

        if ( a && b && c) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
