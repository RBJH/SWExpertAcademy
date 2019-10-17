#include <iostream>

using namespace std;

int T, N;
string X;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> X;

    result = 0;

    int mul = 1;

    for (int x = X.size() - 1; x >= 0; x--)
      result += X[x] - '0';

    result %= N - 1;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}