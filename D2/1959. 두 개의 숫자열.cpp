#include <iostream>

using namespace std;

int T, N, M;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> M;

    int A[20] = {
        0,
    };

    int B[20] = {
        0,
    };

    for (int n = 0; n < N; n++) cin >> A[n];
    for (int m = 0; m < M; m++) cin >> B[m];

    int result = -987654321;

    int sum = 0;

    if (N < M) {
      for (int i = 0; i <= M - N; i++) {
        sum = 0;

        for (int j = 0; j < N; j++) {
          sum += A[j] * B[i + j];
        }

        if (result < sum) result = sum;
      }
    } else {
      for (int i = 0; i <= N - M; i++) {
        sum = 0;

        for (int j = 0; j < M; j++) {
          sum += A[i + j] * B[j];
        }

        if (result < sum) result = sum;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}