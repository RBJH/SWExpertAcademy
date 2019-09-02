#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << '\n';

    cin >> N;

    int snail[10][10] = {
        0,
    };

    int bx = 0;
    int by = 0;

    int dir = 1;

    int num = 1;

    while (num <= N * N) {
      if (dir == 1) {
        if (bx + 1 >= N || snail[by][bx + 1])
          dir++;
        else
          snail[by][bx++] = num++;
      }
      if (dir == 2) {
        if (by + 1 >= N || snail[by + 1][bx])
          dir++;
        else
          snail[by++][bx] = num++;
      }
      if (dir == 3) {
        if (bx - 1 < 0 || snail[by][bx - 1])
          dir++;
        else
          snail[by][bx--] = num++;
      }
      if (dir == 4) {
        if (by - 1 < 0 || snail[by - 1][bx]) {
          dir = 1;

          snail[by][bx++] = num++;
        } else
          snail[by--][bx] = num++;
      }
    }

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) cout << snail[i][j] << ' ';

      cout << '\n';
    }
  }

  return 0;
}