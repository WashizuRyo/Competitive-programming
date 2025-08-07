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
    vector<int> x(n);
 
    rep(i, n) {
        cin >> x[i];
    }
    
    int b;
    cin >> b;
    rep(i, n) {
        if (b == x[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}