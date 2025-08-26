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
    int x, y;
    cin >> x >> y;

    if (x == 12 && y == 12) {
        cout << 12 << endl;
    } else if (x+y > 12) {
        cout << x + y - 12 << endl;
    } else {
        cout << x + y << endl;
    }
}
