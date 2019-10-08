#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    if ((str[str.length() - 1] - '0') % 2)
      result = "Odd";
    else
      result = "Even";

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}