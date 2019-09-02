#include <iostream>

using namespace std;

int T;

int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int fm, fd, sm, sd;

    cin >> fm >> fd >> sm >> sd;

    int result = 0;

    for (int m = sm; m >= fm; m--) {
      if (m == sm)
        result += sd;
      else
        result += day[m];
    }

    result -= fd - 1;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}