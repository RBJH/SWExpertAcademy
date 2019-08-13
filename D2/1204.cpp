// 1204. [S/W 문제해결 기본] 1일차 - 최빈수 구하기
#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> t;

    int cnt[101] = {0, };

    int scr = 0;

    for (int i = 0; i < 1000; i++) {
      cin >> scr;

      cnt[scr]++;
    }

    int max = 0;

    int result = 0;

    for (int i = 100; i >= 0; i--) {
      if (max < cnt[i]) {
        max = cnt[i];

        result = i;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
