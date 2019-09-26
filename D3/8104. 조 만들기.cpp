#include <iostream>

using namespace std;

int T, N, K;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> N >> K;

    int group[20] = {
        0,
    };

    int skill = 1;

    for (int n = 0; n < N; n++) {
      for (int k = 0; k < K; k++) {
        if (n % 2)
          group[K - 1 - k] += skill++;
        else
          group[k] += skill++;
      }
    }

    for (int k = 0; k < K; k++) cout << group[k] << ' ';

    cout << '\n';
  }

  return 0;
}