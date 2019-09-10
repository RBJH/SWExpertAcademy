#include <iostream>

using namespace std;

int result = 0;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    string str;
    string sentence;

    cin >> str >> sentence;

    result = 0;

    for (int i = 0; i <= sentence.length() - str.length(); i++) {
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}