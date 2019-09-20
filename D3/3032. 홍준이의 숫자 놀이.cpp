#include <iostream>

using namespace std;

int T, A, B;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> A >> B;

    int x1 = 1;
    int y1 = 0;

    int x2 = 0;
    int y2 = 1;

    while (A > 1 && B > 1) {
      x1 -= A / B * x2;
      y1 -= A / B * y2;

      A %= B;

      x2 -= B / A * x1;
      y2 -= B / A * y1;

      B %= A;
    }

    if (A == 1)
      cout << x1 << ' ' << y1;
    else if (B == 1)
      cout << x2 << ' ' << y2;
    else
      cout << -1;

    cout << '\n';
  }

  return 0;
}