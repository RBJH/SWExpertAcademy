#include <iostream>

using namespace std;

int T, N;
int result = 0;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    result = 0;

    int hay[10001] = {
        0,
    };

    int size = 0;

    for (int n = 0; n < N; n++) {
      cin >> hay[n];

      size += hay[n];
    }

    int base = size / N;

    int diff = 0;

    for (int n = 0; n < N; n++) {
      diff = hay[n] - base;

      if (diff < 0) diff = -diff;

      result += diff;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}