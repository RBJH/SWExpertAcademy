#include <iostream>

using namespace std;

int T, A, B, C;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> A >> B >> C;

    result = 0;

    int sum = 0;

    for (int i = C / A; i >= 0; i--) {
      sum = i + (C - A * i) / B;

      if (result < sum) result = sum;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}