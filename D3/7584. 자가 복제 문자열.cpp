#include <algorithm>
#include <iostream>

using namespace std;

int T;
long long K;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> K;

    while (1) {
      if (!((K - 1) % 4)) {
        result = 0;
        break;
      } else if ((K - 1) % 2)
        K /= 2;
      else {
        result = 1;
        break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}