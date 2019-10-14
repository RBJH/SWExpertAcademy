#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    int block[100] = {
        0,
    };

    cin >> block[0];

    int asc = 0;
    int desc = 0;

    for (int n = 1; n < N; n++) {
      cin >> block[n];

      if (!(block[n - 1] - block[n])) continue;

      if (block[n] - block[n - 1] > 0) {
        if (asc < block[n] - block[n - 1]) asc = block[n] - block[n - 1];
      } else if (desc < block[n - 1] - block[n])
        desc = block[n - 1] - block[n];
    }

    cout << '#' << t << ' ' << asc << ' ' << desc << '\n';
  }

  return 0;
}