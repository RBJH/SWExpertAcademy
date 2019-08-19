// 1220. [S/W 문제해결 기본] 5일차 - Magnetic
#include <iostream>

using namespace std;

int N;
int result;

int table[100][100];

void init() { result = 0; }

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    init();

    for (int i = 0; i < 100; i++)
      for (int j = 0; j < 100; j++) cin >> table[i][j];

    char cur = ' ';

    for (int i = 0; i < 100; i++) {
      cur = ' ';

      for (int j = 0; j < 100; j++) {
        if (table[j][i] == 1) cur = 'n';

        if (table[j][i] == 2) {
          if (cur == 'n') result++;

          cur = 's';
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}