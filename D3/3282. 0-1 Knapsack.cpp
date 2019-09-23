#include <iostream>

using namespace std;

int T, N, K;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> K;

    result = 0;

    int V[101], C[101];

    for (int n = 1; n <= N; n++) cin >> V[n] >> C[n];

    int d[1001][101] = {
        0,
    };

    for (int k = 1; k <= K; k++) {
      for (int n = 1; n <= N; n++) {
        if (k < V[n])
          d[k][n] = d[k][n - 1];
        else
          d[k][n] = max(d[k - V[n]][n - 1] + C[n], d[k][n - 1]);
      }
    }

    result = d[K][N];

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}