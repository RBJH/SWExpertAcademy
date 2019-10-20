#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> N;

    int n = 0;

    bool flag = false;

    int cnt = 0;

    while (n < N) {
      string str;

      cin >> str;

      flag = false;

      if (isupper(str[0])) flag = true;

      if (flag) {
        for (int i = 1; i < str.length(); i++) {
          if (!islower(str[i]) &&
              !(i == str.length() - 1 &&
                (str[i] == '.' || str[i] == '!' || str[i] == '?'))) {
            flag = false;
            break;
          }
        }
      }

      if (flag) cnt++;

      if (str[str.length() - 1] == '.' || str[str.length() - 1] == '!' ||
          str[str.length() - 1] == '?') {
        cout << cnt << ' ';

        cnt = 0;

        n++;
      }
    }

    cout << '\n';
  }

  return 0;
}