// 1206. [S/W 문제해결 기본] 1일차 - View
#include <iostream>

using namespace std;

int N;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    int buildings[1000] = {0, };

    for (int n = 0; n < N; n++) cin >> buildings[n];

    int result = 0;

    bool flag = false;

    int cnt = 0;

    for (int i = 2; i < N - 2; i++) {
      flag = true;

      cnt = 255;

      for (int j = 1; j <= 2; j++) {
        if (buildings[i] - buildings[i - j] <= 0 ||
            buildings[i] - buildings[i + j] <= 0) {
          flag = false;

          break;
        }

        cnt = min(cnt, buildings[i] - buildings[i - j]);
        cnt = min(cnt, buildings[i] - buildings[i + j]);
      }

      if (flag) result += cnt;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
