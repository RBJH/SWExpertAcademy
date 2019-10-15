#include <iostream>

using namespace std;

int T, N, M;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> M;

    string target[100];

    int m[100] = {
        0,
    };

    string lottery;

    for (int n = 0; n < N; n++) cin >> target[n] >> m[n];

    result = 0;

    bool flag = false;

    for (int mm = 0; mm < M; mm++) {
      cin >> lottery;

      for (int n = 0; n < N; n++) {
        flag = true;

        for (int i = 0; i < 8; i++) {
          if (target[n][i] != '*' && target[n][i] != lottery[i]) {
            flag = false;
            break;
          }
        }

        if (flag) {
          result += m[n];
          break;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}