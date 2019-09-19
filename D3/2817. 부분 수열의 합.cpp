#include <iostream>
#include <vector>

using namespace std;

int T, N, K;
int result;

int A[20] = {
    0,
};

void init() { result = 0; }

void solve(int c, int s) {
  if (s == K) {
    result++;
    return;
  }

  for (int n = c + 1; n < N; n++) solve(n, s + A[n]);
}

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> K;

    for (int n = 0; n < N; n++) cin >> A[n];

    for (int n = 0; n < N; n++) solve(n, A[n]);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}