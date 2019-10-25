#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str;

    result = "";

    for (int i = 0; i < 3; i++) {
      cin >> str;

      result += toupper(str[0]);
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}