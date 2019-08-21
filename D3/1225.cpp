// 1225. [S/W 문제해결 기본] 7일차 - 암호생성기
#include <iostream>

using namespace std;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> t;

    int password[8];

    for (int i = 0; i < 8; i++) cin >> password[i];

    int dec = 1;

    while (password[7]) {
      password[0] -= dec;

      dec++;

      if (dec > 5) dec -= 5;

      if (password[0] < 0) password[0] = 0;

      int tmp = password[0];

      for (int i = 1; i < 8; i++) password[i - 1] = password[i];

      password[7] = tmp;
    }

    cout << '#' << t << ' ';

    for (int i = 0; i < 8; i++) cout << password[i] << ' ';

    cout << '\n';
  }

  return 0;
}