// Way Too Long Words
// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string x;
    cin >> x;

    if (x.size() > 10) {
      string f;
      f = x.at(0) + to_string(x.size() - 2) + x.back();
      cout << f << endl;
    } else {
      cout << x << endl;
    }
  }
}
