#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
    int n, m, count = 0;
    cin >> n >> m;
    rep(i, n) {
        int a;
        cin >> a;
        count += a;
        if (count > m) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
