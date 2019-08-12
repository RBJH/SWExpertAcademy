// 2029. 몫과 나머지 출력하기
#include <iostream>

using namespace std;

int T, N, M;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> M;

    cout << '#' << t << ' ' << N / M << ' ' << N % M << '\n';
  }

  return 0;
}