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
    cin >> n;
    cin >> s;

    if (n >= 3 && s.substr(n-3, 3) == "tea") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
