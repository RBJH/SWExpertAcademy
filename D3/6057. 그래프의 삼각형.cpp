#include <iostream>

using namespace std;

int T, N, M;
int result;

int main() {
  cin >> T;

  bool arr[51][51] = {
      false,
  };

  for (int t = 1; t <= T; t++) {
    cin >> N >> M;

    result = 0;

    for (int i = 1; i <= N; i++)
      for (int j = 1; j <= N; j++) arr[i][j] = false;

    int x, y;

    for (int m = 0; m < M; m++) {
      cin >> x >> y;

      arr[x][y] = arr[y][x] = true;
    }

    for (int i = 1; i < N - 1; i++)
      for (int j = i + 1; j < N; j++)
        for (int k = j + 1; k <= N; k++)
          if (arr[i][j] && arr[j][k] && arr[k][i]) result++;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}