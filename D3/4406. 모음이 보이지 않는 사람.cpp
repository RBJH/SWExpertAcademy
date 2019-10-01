#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
      if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' &&
          str[i] != 'u')
        cout << str[i];
    }

    cout << '\n';
  }

  return 0;
}