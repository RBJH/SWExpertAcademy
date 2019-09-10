#include <iostream>

using namespace std;

int result = 0;

int main() {
  for (int t = 1; t <= 10; t++) {
    int len = 0;

    cin >> len;

    result = 0;

    char words[8][8] = {
        ' ',
    };

    for (int i = 0; i < 8; i++)
      for (int j = 0; j < 8; j++) cin >> words[i][j];

    bool flag = false;
    bool flagCol = false;

    for (int i = 0; i < 8; i++) {
      for (int j = 0; j <= 8 - len; j++) {
        flag = flagCol = true;

        for (int k = 0; k < len / 2; k++) {
          if (words[i][j + k] != words[i][j + len - 1 - k]) flag = false;
          if (words[j + k][i] != words[j + len - 1 - k][i]) flagCol = false;
        }

        if (flag) result++;
        if (flagCol) result++;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}