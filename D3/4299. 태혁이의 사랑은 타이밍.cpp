#include <iostream>

using namespace std;

int T, D, H, M;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> D >> H >> M;

    result = (D - 11) * 24 * 60 + (H - 11) * 60 + M - 11;

    if (result < 0) result = -1;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}