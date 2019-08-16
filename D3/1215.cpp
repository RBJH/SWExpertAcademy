// 1215. [S/W 문제해결 기본] 3일차 - 회문1
#include <iostream>

using namespace std;

int N;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    string str[8];

    for (int i = 0; i < 8; i++) cin >> str[i];

    int result = 0;

    bool flagRow = false;
    bool flagCol = false;

    for (int i = 0; i < 8; i++) {
      for (int j = 0; j <= 8 - N; j++) {
        flagRow = true;
        flagCol = true;

        for (int k = 0; k <= N / 2; k++) {
          if (str[i][j + k] != str[i][j + N - 1 - k]) flagRow = false;
          if (str[j + k][i] != str[j + N - 1 - k][i]) flagCol = false;
        }

        if (flagRow) result++;
        if (flagCol) result++;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}