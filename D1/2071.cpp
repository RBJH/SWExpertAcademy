// 2071. 평균값 구하기
#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int num = 0;

    int sum = 0;

    for (int i = 0; i < 10; i++) {
      cin >> num;

      sum += num;
    }

    cout << '#' << t << ' ' << (sum + 5) / 10 << '\n';
  }

  return 0;
}