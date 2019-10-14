#include <algorithm>
#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int cards[3][9] = {
        0,
    };
    int cards2[3][9] = {
        0,
    };

    string str;

    cin >> str;

    char color = 0;

    for (int i = 0; i < 9; i++) {
      cin >> color;

      if (color == 'R')
        cards[0][str[i] - '1'] = ++cards2[0][str[i] - '1'];
      else if (color == 'G')
        cards[1][str[i] - '1'] = ++cards2[1][str[i] - '1'];
      else
        cards[2][str[i] - '1'] = ++cards2[2][str[i] - '1'];
    }

    int cnt = 0;

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 9; j++) {
        if (cards[i][j] >= 3) {
          cnt++;

          cards[i][j] -= 3;

          if (cnt > 2) break;
        }

        if (cnt > 2) break;
      }

      if (cnt > 2) break;
    }

    if (cnt < 3) {
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 8; j++) {
          for (int k = 0; k < 3; k++) {
            if (cards[i][j] && cards[i][j + 1] && cards[i][j + 2]) {
              cnt++;

              cards[i][j]--;
              cards[i][j + 1]--;
              cards[i][j + 2]--;

              if (cnt > 2) break;
            }
          }

          if (cnt > 2) break;
        }

        if (cnt > 2) break;
      }
    }

    if (cnt < 3)
      result = "Continue";
    else
      result = "Win";

    if (cnt < 3) {
      cnt = 0;

      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 8; j++) {
          for (int k = 0; k < 3; k++) {
            if (cards2[i][j] && cards2[i][j + 1] && cards2[i][j + 2]) {
              cnt++;

              cards2[i][j]--;
              cards2[i][j + 1]--;
              cards2[i][j + 2]--;

              if (cnt > 2) break;
            }
          }

          if (cnt > 2) break;
        }

        if (cnt > 2) break;
      }

      if (cnt < 3) {
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 9; j++) {
            if (cards2[i][j] >= 3) {
              cnt++;

              cards2[i][j] -= 3;

              if (cnt > 2) break;
            }
          }

          if (cnt > 2) break;
        }

        if (cnt > 2) break;
      }
    }

    if (cnt > 2) result = "Win";

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}