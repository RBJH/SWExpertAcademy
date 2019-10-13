#include <iostream>

using namespace std;

int T, N, A, B, P, C;

int main() {
  cin >> T;

  int line[5001] = {
      0,
  };

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> N;

    for (int n = 1; n <= 5000; n++) line[n] = 0;

    for (int n = 0; n < N; n++) {
      cin >> A >> B;

      for (int i = A; i <= B; i++) line[i]++;
    }

    cin >> P;

    for (int p = 0; p < P; p++) {
      cin >> C;

      cout << line[C] << ' ';
    }

    cout << '\n';
  }

  return 0;
}