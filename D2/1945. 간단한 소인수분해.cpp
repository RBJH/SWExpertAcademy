#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    int result[5][2] = {{2, 0}, {3, 0}, {5, 0}, {7, 0}, {11, 0}};

    for (int i = 0; i < 5; i++) {
      while (N % result[i][0] == 0) {
        result[i][1]++;

        N /= result[i][0];
      }
    }

    int a = result[0][1];
    int b = result[1][1];
    int c = result[2][1];
    int d = result[3][1];
    int e = result[4][1];

    cout << '#' << t << ' ' << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e
         << '\n';
  }

  return 0;
}