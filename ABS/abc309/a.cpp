#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == b - 1 && a != 3 && a != 6) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
