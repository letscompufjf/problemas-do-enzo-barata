// Lowest Number and Position
// https://judge.beecrowd.com/pt/problems/view/1180
//! g++ -I/opt/homebrew/include template.cpp -o a.out && ./a.out

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back({x, i});
  }

  sort(v.begin(), v.end());

  cout << "Menor valor: " << v[0].first << "\nPosicao: " << v[0].second
       << "\n";
}
