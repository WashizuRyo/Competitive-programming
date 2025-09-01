#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
    int n, x;
    string y;
    cin >> n;
    vector<string> s(n);
    rep(i, n) {
        cin >> s[i];
    }
    cin >> x >> y;
    if(s[x-1] == y) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
