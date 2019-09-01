#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> t;

    int score[101] = {
        0,
    };

    int tmp = 0;

    for (int i = 0; i < 1000; i++) {
      cin >> tmp;

      score[tmp]++;
    }

    int max = 0;

    int result = 0;

    for (int i = 100; i >= 0; i--) {
      if (score[i] > max) {
        max = score[i];

        result = i;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}