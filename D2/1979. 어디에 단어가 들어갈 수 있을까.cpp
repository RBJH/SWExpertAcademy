#include <iostream>

using namespace std;

int T, N, K;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> K;

    int puzzle[15][15] = {
        0,
    };

    for (int i = 0; i < N; i++)
      for (int j = 0; j < N; j++) cin >> puzzle[i][j];

    int result = 0;

    int cntRow = 0;
    int cntCol = 0;

    bool flag = false;

    for (int i = 0; i <= N; i++) {
      for (int j = 0; j <= N - K; j++) {
        cntRow = 0;
        cntCol = 0;

        for (int k = 0; k < K; k++) {
          if (puzzle[i][j + k]) cntRow++;
          if (puzzle[j + k][i]) cntCol++;
        }

        flag = false;

        if (cntRow == K) {
          flag = true;

          if (j > 0)
            if (puzzle[i][j - 1]) flag = false;
          if (j + K < N)
            if (puzzle[i][j + K]) flag = false;
        } else
          flag = false;

        if (flag) {
          cout << i << ", " << j << "에서 가로\n";
          result++;
        }

        flag = false;

        if (cntCol == K) {
          flag = true;

          if (j > 0)
            if (puzzle[j - 1][i]) flag = false;
          if (j + K < N)
            if (puzzle[j + K][i]) flag = false;
        } else
          flag = false;

        if (flag) result++;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}