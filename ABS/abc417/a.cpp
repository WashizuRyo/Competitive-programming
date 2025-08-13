#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
    int n, a, b, count = 0;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    for (int i = a; i < s.length(); i++) {
        count++;
        cout << s[i];
        if(count == n - a - b) {
            cout << endl;
            return 0;
        }
    }

    cout << endl;
    return 0;
}
