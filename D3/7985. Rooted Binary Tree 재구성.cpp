#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int T, K;

int inorder[1024] = {
    0,
};

vector<int> v[10];

void init() {
  for (int k = 0; k < K; k++) v[k].clear();
}

void solve(int i, int d, int k) {
  v[k].push_back(inorder[i]);

  if (d) {
    solve(i - d, d / 2, k + 1);
    solve(i + d, d / 2, k + 1);
  }
}

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    init();

    cout << '#' << t << ' ';

    cin >> K;

    for (int i = 1; i < pow(2, K); i++) cin >> inorder[i];

    solve(pow(2, K) / 2, pow(2, K) / 4, 0);

    for (int k = 0; k < K; k++) {
      for (int i = 0; i < v[k].size(); i++) cout << v[k][i] << ' ';

      cout << '\n';
    }
  }

  return 0;
}