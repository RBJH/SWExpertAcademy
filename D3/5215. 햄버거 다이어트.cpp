#include <iostream>

using namespace std;

int T, N, L;
int result;

int S[20], K[20];

void init() { result = 0; }

void solve(int n, int s, int k) {
  if (k > L) return;

  if (n >= N) {
    if (result < s) result = s;

    return;
  }

  solve(n + 1, s, k);
  solve(n + 1, s + S[n], k + K[n]);
}

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> L;

    for (int n = 0; n < N; n++) cin >> S[n] >> K[n];

    init();

    solve(0, 0, 0);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}