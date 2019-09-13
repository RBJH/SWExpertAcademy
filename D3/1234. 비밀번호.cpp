#include <iostream>

using namespace std;

int N;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    string str;

    cin >> str;

    for (int i = 0; i < str.length() - 1; i++) {
      if (str[i] == str[i + 1]) {
        str.erase(i, 2);

        if (i)
          i -= 2;
        else
          i--;
      }
    }

    cout << '#' << t << ' ' << str << '\n';
  }

  return 0;
}