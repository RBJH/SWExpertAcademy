// 1213. [S/W 문제해결 기본] 3일차 - String
#include <iostream>

using namespace std;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    string target;

    cin >> target;

    string str;

    cin >> str;

    int result = 0;

    bool flag = false;

    for (int i = 0; i <= str.length() - target.length(); i++) {
      if (target[0] == str[i]) {
        flag = true;

        for (int j = 0; j < target.length(); j++) {
          if (target[j] != str[i + j]) {
            flag = false;
            break;
          }
        }

        if (flag) result++;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}