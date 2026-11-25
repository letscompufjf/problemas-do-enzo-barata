// Distinct Numbers
// https://cses.fi/problemset/task/1621

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x;
  cin >> x;

  vector<int> v(x);
  int d = 1;

  for (int i = 0; i < x; i++) {
    int y;
    cin >> y;
    v[i] = y;
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < x - 1; i++) {
    if (v[i] != v[i + 1]) {
      d++;
    }
  }

  cout << d << endl;
}
