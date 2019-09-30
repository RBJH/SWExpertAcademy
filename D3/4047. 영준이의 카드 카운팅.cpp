#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    string S;

    cin >> S;

    bool information[4][14] = {
        false,
    };

    string subStr;

    result = "";

    for (int i = 0; i < S.length(); i += 3) {
      subStr = S.substr(i, 3);

      int T;
      string XY;

      switch (subStr[0]) {
        case 'S':
          T = 0;
          break;
        case 'D':
          T = 1;
          break;
        case 'H':
          T = 2;
          break;
        case 'C':
          T = 3;
          break;
      }

      XY = subStr.substr(1, 2);

      if (information[T][stoi(XY)]) {
        result = "ERROR";
        break;
      } else
        information[T][stoi(XY)]++;
    }

    if (result == "ERROR")
      cout << result;
    else {
      int cnt = 0;

      for (int i = 0; i < 4; i++) {
        cnt = 0;

        for (int j = 1; j <= 13; j++)
          if (!information[i][j]) cnt++;

        cout << cnt << ' ';
      }
    }

    cout << '\n';
  }

  return 0;
}