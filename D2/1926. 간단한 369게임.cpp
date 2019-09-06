#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  bool flag = false;

  int cur = 0;

  for (int n = 1; n <= N; n++) {
    cur = n;

    flag = true;

    while (cur) {
      if (cur % 10 && !(cur % 10 % 3)) {
        cout << '-';

        flag = false;
      }

      cur /= 10;
    }

    if (flag) cout << n;

    cout << ' ';
  }

  return 0;
}