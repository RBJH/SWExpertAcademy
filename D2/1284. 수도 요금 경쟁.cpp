#include <iostream>

using namespace std;

int T, P, Q, R, S, W;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> P >> Q >> R >> S >> W;

    int A = W * P;
    int B = Q;

    if (W > R) B += (W - R) * S;

    int result = min(A, B);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}