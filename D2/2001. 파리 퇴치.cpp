#include <iostream>

using namespace std;

int T, N, M;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> M;

    int flies[15][15] = {
        0,
    };

    for (int i = 0; i < N; i++)
      for (int j = 0; j < N; j++) cin >> flies[i][j];

    int result = 0;

    int sum = 0;

    for (int i = 0; i <= N - M; i++) {
      for (int j = 0; j <= N - M; j++) {
        sum = 0;

        for (int k = 0; k < M; k++)
          for (int l = 0; l < M; l++) sum += flies[i + k][j + l];

        if (result < sum) result = sum;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}