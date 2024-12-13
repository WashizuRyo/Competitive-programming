#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

vector<string> led_statuses = {"1110111", "0100100", "1011101", "1101101", "0101110", "1101011", "1111011", "0100111", "1111111", "1101111"};

int main() {
  int n;
  cin >> n;

  int result = bitset<7>(led_statuses[n]).to_ulong();

  cout << result << endl;
  return 0;
}