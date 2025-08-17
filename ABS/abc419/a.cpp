#include <algorithm>
#include <iostream>
#include <regex>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
    string s;
    cin >> s;

    if (s == "red") {
        cout << "SSS" << endl;
    } else if (s == "blue") {
        cout << "FFF" << endl;
    } else if(s == "green") {
        cout << "MMM" << endl;
    } else {
        cout << "Unknown" << endl;
    }
}
