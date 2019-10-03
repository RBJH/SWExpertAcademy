#include <iostream>

using namespace std;

int T, N, M;
int B, W;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> M;

    int board[9][9] = {
        0,
    };

    board[N / 2][N / 2] = board[N / 2 + 1][N / 2 + 1] = 2;
    board[N / 2][N / 2 + 1] = board[N / 2 + 1][N / 2] = 1;

    int x, y, c;

    for (int m = 0; m < M; m++) {
      cin >> x >> y >> c;

      board[y][x] = c;

      for (int i = 1; i < N; i++) {
        if (y - i < 1 || !board[y - i][x]) break;

        if (board[y - i][x] == c) {
          for (int j = 1; j <= i; j++) board[y - j][x] = c;

          break;
        }
      }

      for (int i = 1; i < N; i++) {
        if (y - i < 1 || x + i > N || !board[y - i][x + i]) break;

        if (board[y - i][x + i] == c) {
          for (int j = 1; j <= i; j++) board[y - j][x + j] = c;

          break;
        }
      }

      for (int i = 1; i < N; i++) {
        if (x + i > N || !board[y][x + i]) break;

        if (board[y][x + i] == c) {
          for (int j = 1; j <= i; j++) board[y][x + j] = c;

          break;
        }
      }

      for (int i = 1; i < N; i++) {
        if (y + i > N || x + i > N || !board[y + i][x + i]) break;

        if (board[y + i][x + i] == c) {
          for (int j = 1; j <= i; j++) board[y + j][x + j] = c;

          break;
        }
      }

      for (int i = 1; i < N; i++) {
        if (y + i > N || !board[y + i][x]) break;

        if (board[y + i][x] == c) {
          for (int j = 1; j <= i; j++) board[y + j][x] = c;

          break;
        }
      }

      for (int i = 1; i < N; i++) {
        if (y + i > N || x - i < 1 || !board[y + i][x - i]) break;

        if (board[y + i][x - i] == c) {
          for (int j = 1; j <= i; j++) board[y + j][x - j] = c;

          break;
        }
      }

      for (int i = 1; i < N; i++) {
        if (x - i < 1 || !board[y][x - i]) break;

        if (board[y][x - i] == c) {
          for (int j = 1; j <= i; j++) board[y][x - j] = c;

          break;
        }
      }

      for (int i = 1; i < N; i++) {
        if (y - i < 1 || x - i < 1 || !board[y - i][x - i]) break;

        if (board[y - i][x - i] == c) {
          for (int j = 1; j <= i; j++) board[y - j][x - j] = c;

          break;
        }
      }
    }

    B = W = 0;

    for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= N; j++) {
        if (board[j][i] == 1) B++;
        if (board[j][i] == 2) W++;
      }
    }

    cout << '#' << t << ' ' << B << ' ' << W << '\n';
  }

  return 0;
}