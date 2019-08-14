// 1211. [S/W 문제해결 기본] 2일차 - Ladder2
#include <iostream>
#include <vector>

using namespace std;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    int ladder[100][100] = {0, };

    vector<int> v;

    for (int i = 0; i < 100; i++) {
      for (int j = 0; j < 100; j++) {
        cin >> ladder[i][j];

        if (!i && ladder[i][j]) v.push_back(j);
      }
    }

    int x = 0;
    int y = 0;

    int cnt = 0;

    int min = 987654321;

    int result = 0;

    for (int i = 0; i < v.size(); i++) {
      x = v[i];
      y = 0;

      cnt = 0;

      while (y < 99) {
        if (x - 1 >= 0 && ladder[y][x - 1]) {
          while (x - 1 >= 0 && ladder[y][x - 1]) {
            x--;

            cnt++;
          }

          y++;

          cnt++;
          continue;
        }

        while (x + 1 < 100 && ladder[y][x + 1]) {
          x++;

          cnt++;
        }

        y++;

        cnt++;
      };

      if (min > cnt) {
        min = cnt;

        result = v[i];
      } else if (min == cnt)
        if (result <= v[i]) result = v[i];
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
