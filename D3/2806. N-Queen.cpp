#include <iostream>

using namespace std;

int T, N;
int result;

int board[10][10] = {
    0,
};

void init() {
  result = 0;

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) board[i][j] = 0;
}

void solve(int r, int c) {
  if (r == N - 1) {
    result++;
    return;
  }

  for (int i = 0; i < N; i++) {
    board[r][i]++;
    board[i][c]++;
  }

  board[r][c]--;

  for (int i = 1; i < N; i++) {
    if (r - i > 0 && c - i >= 0) board[r - i][c - i]++;
    if (r - i > 0 && c + i < N) board[r - i][c + i]++;
    if (r + i < N && c - i >= 0) board[r + i][c - i]++;
    if (r + i < N && c + i < N) board[r + i][c + i]++;
  }

  for (int i = 0; i < N; i++) {
    if (!board[r + 1][i]) solve(r + 1, i);
  }

  for (int i = 0; i < N; i++) {
    board[r][i]--;
    board[i][c]--;
  }

  board[r][c]++;

  for (int i = 1; i < N; i++) {
    if (r - i > 0 && c - i >= 0) board[r - i][c - i]--;
    if (r - i > 0 && c + i < N) board[r - i][c + i]--;
    if (r + i < N && c - i >= 0) board[r + i][c - i]--;
    if (r + i < N && c + i < N) board[r + i][c + i]--;
  }
}

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    init();

    for (int i = 0; i < N; i++) {
      solve(0, i);
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}