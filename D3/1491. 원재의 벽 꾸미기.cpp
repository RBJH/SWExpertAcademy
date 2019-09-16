#include <cmath>
#include <iostream>

using namespace std;

int T, N, A, B;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> A >> B;

    result = 987654321;

    for (int C = 1; C <= sqrt(N); C++)
      for (long long R = C; R * C <= N; R++)
        if (A * (R - C) + B * (N - R * C) < result)
          result = A * (R - C) + B * (N - R * C);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}