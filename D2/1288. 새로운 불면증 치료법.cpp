#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    int num[10] = {
        0,
    };

    int result = 0;

    bool flag = true;

    int mul = 1;

    int tmp = 0;

    while (flag) {
      flag = false;

      result = tmp = N * mul++;

      while (tmp) {
        num[tmp % 10]++;

        tmp /= 10;
      }

      for (int i = 0; i < 10; i++) {
        if (!num[i]) {
          flag = true;
          break;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}