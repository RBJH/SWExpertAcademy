#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    int min = 100001;
    int cnt = 0;

    int distance = 0;

    for (int n = 0; n < N; n++) {
      cin >> distance;

      if (distance < 0) distance = -distance;

      if (distance == min) cnt++;
      if (distance < min) {
        min = distance;

        cnt = 1;
      }
    }

    int result[2] = {min, cnt};

    cout << '#' << t << ' ' << result[0] << ' ' << result[1] << '\n';
  }

  return 0;
}