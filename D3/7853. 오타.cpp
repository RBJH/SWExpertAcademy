#include <iostream>

using namespace std;

int T;
long long result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    result = 1;

    long long mul = 0;

    for (int i = 0; i < str.length(); i++) {
      mul = 1;

      if (i == 0 && str[i] != str[i + 1])
        mul++;
      else if (i == str.length() - 1 && str[i - 1] != str[i])
        mul++;
      else if (i && i < str.length() - 1) {
        if (str[i - 1] != str[i] && str[i] != str[i + 1] &&
            str[i - 1] != str[i + 1])
          mul = 3;
        else if (str[i - 1] == str[i + 1] && str[i] != str[i + 1])
          mul++;
        else if (str[i - 1] == str[i] && str[i] != str[i + 1])
          mul++;
        else if (str[i - 1] != str[i] && str[i] == str[i + 1])
          mul++;
      }

      result *= mul;

      result %= 1000000007;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}