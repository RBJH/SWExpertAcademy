// 1233. [S/W 문제해결 기본] 9일차 - 사칙연산 유효성 검사
#include <iostream>
#include <utility>

using namespace std;

int N;

pair<string, pair<int, int>> tree[201];

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    int left = 0;
    int right = 0;

    int result = 1;

    for (int n = 1; n <= N; n++) {
      cin >> n >> tree[n].first;

      if (N > n * 2) {
        cin >> left >> right;

        if (!(tree[n].first == "+" || tree[n].first == "-" ||
              tree[n].first == "*" || tree[n].first == "/"))
          result = 0;
      }
      if (N == n * 2) {
        result = 0;

        cin >> left;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}