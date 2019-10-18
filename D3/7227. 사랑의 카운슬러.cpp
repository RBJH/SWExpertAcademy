#include <algorithm>
#include <iostream>

using namespace std;

int T, N;
long long X, Y;
long long result;

pair<int, int> p[20];
bool chk[20];

void init() {
  result = 80000000001;

  for (int n = 0; n < N; n++) chk[n] = false;
}

void solve(int c, int n) {
  if (n == N / 2) {
    X = Y = 0;

    for (int nn = 0; nn < N; nn++) {
      if (chk[nn]) {
        X -= p[nn].first;
        Y -= p[nn].second;
      } else {
        X += p[nn].first;
        Y += p[nn].second;
      }
    }

    if (result > X * X + Y * Y) result = X * X + Y * Y;

    return;
  }

  for (int i = c; i < N; i++) {
    if (!chk[i]) {
      chk[i] = true;

      solve(i + 1, n + 1);

      chk[i] = false;
    }
  }
}

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    init();

    for (int n = 0; n < N; n++) {
      cin >> X >> Y;

      p[n] = make_pair(X, Y);
    }

    solve(0, 0);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}