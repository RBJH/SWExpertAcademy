#include <iostream>

using namespace std;

int T, N, K;
char C;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << '\n';

    cin >> N;

    int cnt = 0;

    for (int n = 0; n < N; n++) {
      cin >> C >> K;

      for (int k = 0; k < K; k++) {
        cout << C;

        cnt++;

        if (cnt == 10) {
          cout << '\n';

          cnt = 0;
        }
      }
    }

    cout << '\n';
  }

  return 0;
}