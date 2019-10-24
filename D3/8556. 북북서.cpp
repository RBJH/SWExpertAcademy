#include <cmath>
#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    string str;

    cin >> str;

    int nominator = 0;
    int denominator = 1;

    if (str[str.length() - 1] == 'h') {
      nominator = 0;

      str.erase(str.length() - 5);
    } else {
      nominator = 90;

      str.erase(str.length() - 4);
    }

    int cnt = 0;

    while (str.length()) {
      cnt++;

      nominator *= pow(2, cnt) / denominator;

      if (str[str.length() - 1] == 'h') {
        nominator -= 90;

        str.erase(str.length() - 5);
      } else {
        nominator += 90;

        str.erase(str.length() - 4);
      }

      denominator = pow(2, cnt);
    }

    while (!(nominator % 2) && !(denominator % 2)) {
      nominator /= 2;
      denominator /= 2;
    }

    if (denominator > 1)
      cout << nominator << '/' << denominator;
    else
      cout << nominator;

    cout << '\n';
  }

  return 0;
}