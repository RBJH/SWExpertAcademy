#include <iostream>

using namespace std;

int N;
int result = 0;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    int table[100][100] = {
        0,
    };

    for (int i = 0; i < N; i++)
      for (int j = 0; j < N; j++) cin >> table[i][j];

    result = 0;

    bool flag = false;

    for (int i = 0; i < N; i++) {
      flag = false;

      for (int j = 0; j < N; j++) {
        if (table[j][i] == 1) flag = true;
        if (table[j][i] == 2) {
          if (flag) result++;

          flag = false;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}