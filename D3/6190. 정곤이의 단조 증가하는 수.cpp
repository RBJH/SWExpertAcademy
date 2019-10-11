#include <iostream>

using namespace std;

int T, N;
int A[1001];
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    result = 0;

    for (int n = 1; n <= N; n++) cin >> A[n];

    bool flag = false;

    int tmp = 0;
    int cur = 0;

    for (int i = 1; i < N; i++) {
      for (int j = i + 1; j <= N; j++) {
        flag = true;

        tmp = A[i] * A[j];

        cur = tmp % 10;

        while (tmp) {
          if (cur < tmp % 10) {
            flag = false;
            break;
          }

          cur = tmp % 10;

          tmp /= 10;
        }

        if (flag && result < A[i] * A[j]) result = A[i] * A[j];
      }
    }

    if (!result) result = -1;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}