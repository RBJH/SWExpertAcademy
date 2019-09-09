#include <iostream>

using namespace std;

int N;
int result = 0;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    int buildings[1000] = {
        0,
    };

    for (int n = 0; n < N; n++) cin >> buildings[n];

    result = 0;

    int tmp = 0;

    for (int i = 2; i < N - 2; i++) {
      tmp =
          min(buildings[i] - buildings[i - 1], buildings[i] - buildings[i + 1]);

      if (tmp < 0) continue;

      tmp = min(tmp, buildings[i] - buildings[i - 2]);

      if (tmp < 0) continue;

      tmp = min(tmp, buildings[i] - buildings[i + 2]);

      if (tmp < 0) tmp = 0;

      result += tmp;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
