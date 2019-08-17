// 1217. [S/W 문제해결 기본] 4일차 - 거듭 제곱
#include <iostream>

using namespace std;

int N, M;

int solve(int n, int m) {
  if (m == 0)
    return 1;
  else
    return solve(n, m - 1) * n;
}

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    cin >> N >> M;

    int result = solve(N, M);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}