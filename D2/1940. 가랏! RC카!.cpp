#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= 10; t++) {
    cin >> N;

    int result = 0;

    int command = 0;
    int a = 0;

    int v = 0;

    for (int n = 0; n < N; n++) {
      cin >> command;

      if (command) {
        cin >> a;

        if (command == 1)
          v += a;
        else
          v -= a;

        if (v < 0) v = 0;
      }

      result += v;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}