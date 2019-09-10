#include <iostream>

using namespace std;

int result = 0;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    char words[100][100] = {
        ' ',
    };

    for (int i = 0; i < 100; i++)
      for (int j = 0; j < 100; j++) cin >> words[i][j];

    result = 100;

    bool flag = false;
    bool flagCol = false;

    while (result--) {
      for (int i = 0; i < 100; i++) {
        for (int j = 0; j <= 100 - result; j++) {
          flag = flagCol = true;

          for (int k = 0; k < result / 2; k++) {
            if (words[i][j + k] != words[i][j + result - 1 - k]) flag = false;
            if (words[j + k][i] != words[j + result - 1 - k][i])
              flagCol = false;
          }

          if (flag || flagCol) {
            flag = true;
            break;
          }
        }

        if (flag) break;
      }

      if (flag) break;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}