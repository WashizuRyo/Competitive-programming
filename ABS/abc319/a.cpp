#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  map<string, int> ans;
  ans["tourist"] = 3858;
  ans["ksun48"] = 3679;
  ans["Benq"] = 3658;
  ans["Um_nik"] = 3648;
  ans["apiad"] = 3638;
  ans["Stonefeang"] = 3630;
  ans["ecnerwala"] = 3613;
  ans["mnbvmar"] = 3555;
  ans["newbiedmy"] = 3516;
  ans["semiexp"] = 3481;

  cout << ans[s] << endl;
}