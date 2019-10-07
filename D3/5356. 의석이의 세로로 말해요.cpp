#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str[5];

    int len = 0;

    for (int i = 0; i < 5; i++) {
      cin >> str[i];

      if (len < str[i].length()) len = str[i].length();
    }

    result = "";

    for (int i = 0; i < len; i++)
      for (int j = 0; j < 5; j++)
        if (i < str[j].length()) result += str[j][i];

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}