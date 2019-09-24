#include <iostream>

using namespace std;

int T, N;
long long result;

int main() {
  cin >> T;

  long long P[101] = {
      0,
  };

  P[1] = P[2] = P[3] = 1;
  P[4] = P[1] + P[3];

  for (int i = 5; i <= 100; i++) P[i] = P[i - 1] + P[i - 5];

  for (int t = 1; t <= T; t++) {
    cin >> N;

    result = P[N];

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}