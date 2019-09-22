#include <iostream>

using namespace std;

int T, A, B;
long long result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> A >> B;

    result = A / B * (long long)(A / B);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}