#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int sdoku[9][9] = {
        0,
    };

    for (int i = 0; i < 9; i++)
      for (int j = 0; j < 9; j++) cin >> sdoku[i][j];

    int cnt[10] = {
        0,
    };

    int result = 1;

    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        cnt[sdoku[i][j]]++;
        cnt[sdoku[j][i]]++;
      }

      for (int j = 1; j <= 9; j++) {
        if (cnt[j] != (i + 1) * 2) {
          result = 0;
          break;
        }
      }

      if (!result) break;
    }

    if (result) {
      int idx = 0;

      for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
          idx++;

          for (int k = 0; k < 3; k++)
            for (int l = 0; l < 3; l++) cnt[sdoku[i + k][j + l]]++;

          for (int k = 1; k <= 9; k++) {
            if (cnt[k] != idx + 18) {
              result = 0;
              break;
            }
          }

          if (!result) break;
        }

        if (!result) break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}