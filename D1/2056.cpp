// 2056. 연월일 달력
#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    string result = "";

    if (N / 10000 < 1000) result += '0';
    if (N / 10000 < 100) result += '0';
    if (N / 10000 < 10) result += '0';

    result += to_string(N / 10000) + '/';

    N %= 10000;

    switch (N / 100) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
        result += '0';
      case 10:
      case 12:
        result += to_string(N / 100) + '/';

        if (N % 100 < 10) result += '0';

        if (N % 100 <= 31)
          result += to_string(N % 100);
        else
          result = "-1";
        break;
      case 4:
      case 6:
      case 9:
        result += '0';
      case 11:
        result += to_string(N / 100) + '/';

        if (N % 100 < 10) result += '0';

        if (N % 100 < 31)
          result += to_string(N % 100);
        else
          result = "-1";
        break;
      case 2:
        result += "02/";

        if (N % 100 < 10) result += '0';

        if (N % 100 <= 28)
          result += to_string(N % 100);
        else
          result = "-1";
        break;
      default:
        result = "-1";
        break;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}