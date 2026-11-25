// Pares e Ímpares
// https://judge.beecrowd.com/pt/problems/view/1259

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> p;
  vector<int> ii;

  for (int i = 0; i < n; i++) {
    int y;
    cin >> y;

    if (y % 2 == 0) {
      p.push_back(y);
    } else {
      ii.push_back(y);
    }
  }

  sort(p.begin(), p.end());
  sort(ii.begin(), ii.end(), greater<>());

  for (int e : p) {
    cout << e << endl;
  }

  for (int e : ii) {
    cout << e << endl;
  }
}
