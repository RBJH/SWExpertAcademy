// 2070. 큰 놈, 작은 놈, 같은 놈
#include <iostream>

using namespace std;

int T, N, M;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> M;

    char result = '=';

    if (N > M)
      result = '>';
    else if (N < M)
      result = '<';

    cout << '#' << t << ' ' << result << '\n';
  }
  return 0;
}