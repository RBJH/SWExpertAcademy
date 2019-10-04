#include <iostream>

using namespace std;

int T;
string result[5];

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    for (int i = 0; i < 3; i++) {
      if (i == 2)
        result[i] = "#";
      else
        result[i] = ".";
    }

    for (int i = 0; i < str.length(); i++) {
      result[0] += ".#..";
      result[1] += "#.#.";
      result[2] += "." + str.substr(i, 1) + ".#";
    }

    int row = 0;

    for (int i = 0; i < 5; i++) {
      row = i;

      if (i > 2) row = 5 - 1 - i;

      cout << result[row] << '\n';
    }
  }

  return 0;
}