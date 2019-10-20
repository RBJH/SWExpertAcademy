#include <iostream>

using namespace std;

int T, S, E, M;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> S >> E >> M;

    result = S;

    while (1) {
      if ((result % 24 == E || (E == 24 && !(result % 24))) &&
          (result % 29 == M || (M == 29 && !(result % 29))))
        break;

      result += 365;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}