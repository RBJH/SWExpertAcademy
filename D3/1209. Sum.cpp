#include <iostream>

using namespace std;

int result = 0;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    int arr[100][100] = {
        0,
    };

    for (int i = 0; i < 100; i++)
      for (int j = 0; j < 100; j++) cin >> arr[i][j];

    result = 0;

    int sumRow = 0;
    int sumCol = 0;
    int sumDia = 0;
    int sumDiaR = 0;

    for (int i = 0; i < 100; i++) {
      sumRow = sumCol = 0;

      sumDia += arr[i][i];
      sumDiaR += arr[99 - i][i];

      for (int j = 0; j < 100; j++) {
        sumRow += arr[i][j];
        sumCol += arr[j][i];
      }

      if (result < sumRow) result = sumRow;
      if (result < sumCol) result = sumCol;
    }

    if (result < sumDia) result = sumDia;
    if (result < sumDiaR) result = sumDiaR;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}