// 2068. 최대수 구하기
#include <iostream>
#include <vector>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    vector<int> v;

    int num = 0;
    int result = 0;

    for (int i = 0; i < 10; i++) {
      cin >> num;

      if (result < num) result = num;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}