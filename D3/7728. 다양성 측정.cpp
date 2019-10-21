#include <iostream>

using namespace std;

int T, X;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> X;

    result = 0;

    int cnt[10] = {
        0,
    };

    while (X) {
      cnt[X % 10]++;

      X /= 10;
    }

    for (int i = 0; i < 10; i++)
      if (cnt[i]) result++;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}