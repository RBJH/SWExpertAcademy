#include <iostream>

using namespace std;

int T, N;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    int A[1001] = {
        0,
    };

    int d[1001] = {
        0,
    };

    for (int n = 0; n < N; n++) {
      cin >> A[n];

      d[n] = 1;
    }

    result = 1;

    for (int n = 0; n < N; n++) {
      for (int i = n + 1; i < N; i++) {
        if (A[n] < A[i]) {
          if (d[n] + 1 > d[i]) {
            d[i] = d[n] + 1;

            if (d[i] > result) result = d[i];
          }
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}