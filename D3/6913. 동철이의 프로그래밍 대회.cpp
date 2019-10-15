#include <iostream>

using namespace std;

int T, N, M;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> M;

    int a;

    int cnt = 0;
    int max = 0;

    int sol = 0;

    for (int n = 0; n < N; n++) {
      sol = 0;

      for (int m = 0; m < M; m++) {
        cin >> a;

        sol += a;
      }

      if (max < sol) {
        cnt = 1;
        max = sol;
      } else if (max == sol)
        cnt++;
    }

    cout << '#' << t << ' ' << cnt << ' ' << max << '\n';
  }

  return 0;
}