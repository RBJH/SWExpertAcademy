#include <iostream>

using namespace std;

int T;
int result;

int num[283][283] = {
    0,
};

int main() {
  cin >> T;

  int b = 1;

  int row = 0;
  int col = 0;

  int cnt = 2;

  for (int i = 1; i <= 282; i++) {
    b += row;

    col = cnt;

    for (int j = 1; j <= 282; j++) {
      if (j == 1)
        num[i][j] = b;
      else {
        num[i][j] = num[i][j - 1] + col;

        col++;
      }
    }

    row++;

    cnt++;
  }

  for (int t = 1; t <= T; t++) {
    int p, q;

    cin >> p >> q;

    int px = 0;
    int py = 0;
    int qx = 0;
    int qy = 0;

    bool flag = false;
    bool qflag = false;

    for (int i = 1; i <= 141; i++) {
      for (int j = 1; j <= 141; j++) {
        if (num[i][j] == p) {
          px = j;
          py = i;

          flag = true;
        }

        if (num[i][j] == q) {
          qx = j;
          qy = i;

          qflag = true;
        }

        if (flag && qflag) break;
      }

      if (flag && qflag) break;
    }

    result = num[py + qy][px + qx];

    cout << '#' << t << ' ' << result << '\n';
  }
  return 0;
}