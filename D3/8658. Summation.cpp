#include <algorithm>
#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int num[10] = {
        0,
    };

    int tmp = 0;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
      cin >> tmp;

      sum = 0;

      while (tmp) {
        sum += tmp % 10;

        tmp /= 10;
      }

      num[i] = sum;
    }

    sort(num, num + 10);

    cout << '#' << t << ' ' << num[9] << ' ' << num[0] << '\n';
  }

  return 0;
}