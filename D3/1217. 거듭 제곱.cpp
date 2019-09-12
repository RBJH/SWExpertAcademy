#include <iostream>

using namespace std;

int N, M;
int result = 0;

int solve(int n, int m) {
  if (!m) return 1;

  return n * solve(n, m - 1);
}

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    cin >> N >> M;

    result = solve(N, M);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}