#include <iostream>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    result = 0;

    int cur = 0;

    for (int i = 0; i < str.length(); i++) {
      if (cur < i) {
        result += i - cur;

        cur += i - cur;
      }

      cur += str[i] - '0';
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}