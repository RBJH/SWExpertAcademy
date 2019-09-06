#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    int result = 0;

    string sub;

    bool flag = false;

    for (int i = 1; i < str.length(); i++) {
      sub = str.substr(0, i);

      flag = true;

      for (int j = i; j < str.length(); j += sub.length()) {
        for (int k = 0; k < sub.length(); k++) {
          if (j + k < str.length() && str[j + k] != sub[k]) {
            flag = false;
            break;
          }
        }

        if (!flag) break;
      }

      if (flag) {
        result = i;
        break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}