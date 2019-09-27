#include <iostream>

using namespace std;

int T, L, U, X;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> L >> U >> X;

    if (X > U)
      result = -1;
    else if (X > L)
      result = 0;
    else
      result = L - X;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}