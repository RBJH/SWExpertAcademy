#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << '\n';

    cin >> N;

    int result[8][2] = {{50000, 0}, {10000, 0}, {5000, 0}, {1000, 0},
                        {500, 0},   {100, 0},   {50, 0},   {10, 0}};

    for (int i = 0; i < 8; i++) {
      while (N - result[i][0] >= 0) {
        result[i][1]++;

        N -= result[i][0];
      }

      if (!N) break;
    }

    for (int i = 0; i < 8; i++) cout << result[i][1] << ' ';

    cout << '\n';
  }

  return 0;
}