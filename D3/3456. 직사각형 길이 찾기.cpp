#include <iostream>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int a, b, c;

    cin >> a >> b >> c;

    if (a == b)
      result = c;
    else if (b == c)
      result = a;
    else
      result = b;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}