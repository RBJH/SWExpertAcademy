// 1227. [S/W 문제해결 기본] 7일차 - 미로2
#include <iostream>

using namespace std;

int result = 0;

int maze[100][100] = {0, };
bool chk[100][100] = {false, };

int dir[4][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

void init() {
  result = 0;

  for (int i = 0; i < 100; i++)
    for (int j = 0; j < 100; j++) chk[i][j] = false;
}

void solve(int x, int y) {
  chk[y][x] = true;

  for (int d = 0; d < 4; d++) {
    int nx = x + dir[d][0];
    int ny = y + dir[d][1];

    if (nx < 0 || nx >= 100 || ny < 0 || ny >= 100) continue;

    if (maze[ny][nx] == 3) {
      result = 1;
      return;
    }

    if (!maze[ny][nx] && !chk[ny][nx]) solve(nx, ny);
  }

  return;
}

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    init();

    int bx = 0;
    int by = 0;

    char tmp = ' ';

    for (int i = 0; i < 100; i++) {
      for (int j = 0; j < 100; j++) {
        cin >> tmp;

        maze[i][j] = tmp - '0';

        if (maze[i][j] == 2) {
          bx = j;
          by = i;
        }
      }
    }

    solve(bx, by);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
