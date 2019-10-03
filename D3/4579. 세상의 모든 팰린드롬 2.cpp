#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    result = "Exist";

    for (int i = 0; i < str.length() / 2; i++) {
      if (str[i] == '*' || str[str.length() - 1 - i] == '*') {
        result = "Exist";
        break;
      }

      if (str[i] != str[str.length() - 1 - i]) {
        result = "Not exist";
        break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}