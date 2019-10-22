#include <iostream>

using namespace std;

int T, N, D;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> D;

    result = 0;

    int flag = 0;

    int d = 0;

    for (int n = 0; n < N; n++) {
      cin >> flag;

      if (flag)
        d = 0;
      else {
        d++;

        if (d == D) {
          result++;

          d = 0;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}