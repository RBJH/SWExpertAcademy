#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    cout << '#' << t << ' ' << 2 * N * (long long)N - 4 * (long long)N + 3
         << ' ' << 2 * (N + 1) * (long long)(N + 1) - 4 * (long long)(N + 1) + 1
         << '\n';
  }

  return 0;
}