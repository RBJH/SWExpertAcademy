#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    int result = 0;

    for (int n = 1; n <= N; n++) {
      if (n % 2)
        result += n;
      else
        result -= n;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}