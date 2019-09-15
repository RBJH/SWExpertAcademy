#include <iostream>

using namespace std;

int T, N, M;
int result = 0;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> M;

    char arr[50][100] = {
        ' ',
    };

    for (int n = 0; n < N; n++)
      for (int m = 0; m < M; m++) cin >> arr[n][m];

    int row = 0;
    int b = 0;

    bool flag = false;

    for (int i = N - 1; i >= 4; i--) {
      for (int j = M - 1; j >= 55; j--) {
        if (arr[i][j] == '1') {
          row = i;

          b = j - 55;

          flag = true;
          break;
        }
      }

      if (flag) break;
    }

    string str[10] = {"0001101", "0011001", "0010011", "0111101", "0100011",
                      "0110001", "0101111", "0111011", "0110111", "0001011"};

    string num;

    int password[8] = {
        0,
    };

    int index = 0;

    for (int i = b; i < b + 56; i += 7) {
      num = "";

      for (int j = i; j < i + 7; j++) num += arr[row][j];

      for (int j = 0; j < 10; j++) {
        if (str[j] == num) {
          password[index++] = j;
          break;
        }
      }
    }

    int validation = 0;

    for (int i = 0; i < 8; i++) {
      if (i % 2)
        validation += password[i];
      else
        validation += password[i] * 3;
    }

    result = 0;

    if (!(validation % 10))
      for (int i = 0; i < 8; i++) result += password[i];

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}