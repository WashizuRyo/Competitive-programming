#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

struct Node {
  Node *nex;
  string value;
  Node(const string &value = "") : nex(NULL), value(value) {}
}

struct HashMaoNodes {
  Node *nil;

  void init() {
    nil = new Node();
    nil->nex = nil;
  }

  void insert(Node *v) {
    v->nex = nil->nex;
    nil->nex = v;
  }

  void erase(string &S) {
    Node *cur = nil, *ncur = cur->nex;
    while (ncur != nil) {
      if (ncur->value == S) {
        cur->nex = ncur->nex;
        delete ncur;
        return;
      } else {
        cur = ncur;
        ncur = cur->nex;
      }
    }
  }
  bool search(string &S) {
    Node *cur = nil, *ncur = cur->nex;
    while (ncur != nil) {
    }
  }
}


int main() {
}