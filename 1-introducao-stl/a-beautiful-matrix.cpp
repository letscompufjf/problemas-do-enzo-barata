// Beautiful Matrix
// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<vector<int>> m(5, vector<int>(5));
  pair<int, int> oP;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> m[i][j];
      if (m[i][j] == 1)
        oP = {i, j};
    }
  }

  // cout << endl << oP.first << "," << oP.second << endl;
  cout << abs(2 - oP.first) + abs(2 - oP.second) << endl;
}
