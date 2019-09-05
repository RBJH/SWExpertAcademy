#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    int result = 1;

    for (int i = 0; i <= str.length() / 2; i++) {
      if (str[i] != str[str.length() - 1 - i]) {
        result = 0;
        break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}