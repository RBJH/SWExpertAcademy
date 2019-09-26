#include <iostream>

using namespace std;

int T, N, B, E;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> B >> E;

    int hourglass[10000] = {
        0,
    };

    for (int n = 0; n < N; n++) cin >> hourglass[n];

    result = 0;

    for (int n = 0; n < N; n++) {
      if (!(B % hourglass[n])) {
        result++;
        continue;
      }

      for (int e = 1; e <= E; e++) {
        if (!((B - e) % hourglass[n]) || !((B + e) % hourglass[n])) {
          result++;
          break;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}