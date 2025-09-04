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

    int a = n % 5;
    if ( a == 0) {
        cout << n << endl;
    } else if (a == 1 || a == 2 ) {
        cout << n - a << endl;
    } else if (a == 3 || a == 4) {
        cout << n + 5 - a << endl;
    }
}
