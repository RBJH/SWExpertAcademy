// 1210. [S/W 문제해결 기본] 2일차 - Ladder1
#include <iostream>

using namespace std;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    int ladder[100][100] = {0, };

    int result = 0;
    int y = 0;

    for (int i = 0; i < 100; i++) {
      for (int j = 0; j < 100; j++) {
        cin >> ladder[i][j];

        if (ladder[i][j] == 2) {
          result = j;
          y = i;
        }
      }
    }

    while (y) {
      if (result - 1 >= 0 && ladder[y][result - 1]) {
        while (result - 1 >= 0 && ladder[y][result - 1]) result--;

        y--;
        continue;
      }

      while (result + 1 < 100 && ladder[y][result + 1]) result++;

      y--;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
