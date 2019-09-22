#include <iostream>

using namespace std;

int T, N, M;
int result, answer;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> M;

    for (int i = 0; i <= M; i++) {
      if (1 * i + 2 * (M - i) == N) {
        result = i;
        answer = M - i;
        break;
      }
    }

    cout << '#' << t << ' ' << result << ' ' << answer << '\n';
  }

  return 0;
}