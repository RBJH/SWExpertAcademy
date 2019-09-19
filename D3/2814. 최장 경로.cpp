#include <iostream>

using namespace std;

int T, N, M;
int result;

bool graph[11][11] = {
    false,
};
bool chk[11] = {
    false,
};

void init() {
  result = 0;

  for (int i = 1; i <= N; i++) {
    chk[i] = false;

    for (int j = 1; j <= N; j++) graph[i][j] = false;
  }
}

void solve(int b, int c) {
  if (result < c) result = c;

  chk[b] = true;

  for (int n = 1; n <= N; n++)
    if (graph[b][n] && !chk[n]) solve(n, c + 1);

  chk[b] = false;

  return;
}

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    init();

    cin >> N >> M;

    int x, y;

    for (int m = 0; m < M; m++) {
      cin >> x >> y;

      graph[x][y] = graph[y][x] = true;
    }

    for (int n = 1; n <= N; n++) solve(n, 1);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}