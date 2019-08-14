// 1209. [S/W 문제해결 기본] 2일차 - Sum
#include <iostream>

using namespace std;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    int arr[100][100] = {0, };

    for (int i = 0; i < 100; i++)
      for (int j = 0; j < 100; j++) cin >> arr[i][j];

    int result = 0;
    int sum = 0;

    for (int i = 0; i < 100; i++) {
      int sumRow = 0;
      int sumCol = 0;

      for (int j = 0; j < 100; j++) {
        sumRow += arr[i][j];
        sumCol += arr[j][i];
      }

      int candidate = max(sumRow, sumCol);

      result = max(result, candidate);

      sum += arr[i][i];
    }

    result = max(result, sum);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
