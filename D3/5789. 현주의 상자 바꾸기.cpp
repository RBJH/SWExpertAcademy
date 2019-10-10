#include <iostream>

using namespace std;

int T, N, Q, L, R;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> N >> Q;

    int box[1001] = {
        0,
    };

    for (int n = 1; n <= N; n++) box[n] = 0;

    for (int i = 1; i <= Q; i++) {
      cin >> L >> R;

      for (int j = L; j <= R; j++) box[j] = i;
    }

    for (int n = 1; n <= N; n++) cout << box[n] << ' ';

    cout << '\n';
  }

  return 0;
}