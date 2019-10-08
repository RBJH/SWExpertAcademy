#include <iostream>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int m, d;

    cin >> m >> d;

    int date = d + 3;

    switch (m) {
      case 12:
        date += 30;
      case 11:
        date += 31;
      case 10:
        date += 30;
      case 9:
        date += 31;
      case 8:
        date += 31;
      case 7:
        date += 30;
      case 6:
        date += 31;
      case 5:
        date += 30;
      case 4:
        date += 31;
      case 3:
        date += 29;
      case 2:
        date += 31;
    }

    result = date % 7;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}