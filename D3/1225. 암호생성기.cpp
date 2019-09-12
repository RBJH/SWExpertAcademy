#include <iostream>

using namespace std;

int main() {
  for (int t = 1; t <= 10; t++) {
    cout << '#' << t << ' ';

    cin >> t;

    int password[8] = {
        0,
    };

    for (int i = 0; i < 8; i++) cin >> password[i];

    int tmp = 0;

    int cnt = 1;

    while (password[7]) {
      if (cnt > 5) cnt = 1;

      tmp = password[0] - cnt++;

      for (int i = 1; i < 8; i++) password[i - 1] = password[i];

      if (tmp < 0) tmp = 0;

      password[7] = tmp;
    }

    for (int i = 0; i < 8; i++) cout << password[i] << ' ';

    cout << '\n';
  }

  return 0;
}