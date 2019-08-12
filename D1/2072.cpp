// 2072. 홀수만 더하기
#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int num = 0;

    int result = 0;

    for (int i = 0; i < 10; i++) {
      cin >> num;

      if (num % 2) result += num;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}