#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> N;

    for (int n = 1; n <= N; n++) cout << 1 << '/' << N << ' ';

    cout << '\n';
  }

  return 0;
}