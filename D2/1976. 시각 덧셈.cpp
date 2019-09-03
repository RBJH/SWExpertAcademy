#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int fh, fm, sh, sm;

    cin >> fh >> fm >> sh >> sm;

    int result[2] = {0, 0};

    result[0] = fh + sh;
    result[1] = fm + sm;

    if (result[1] >= 60) {
      result[0]++;
      result[1] -= 60;
    }

    if (result[0] > 12) result[0] -= 12;

    cout << '#' << t << ' ' << result[0] << ' ' << result[1] << '\n';
  }

  return 0;
}