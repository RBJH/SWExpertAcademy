// 1545. 거꾸로 출력해 보아요
#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  for (int n = N; n >= 0; n--) cout << n << ' ';

  return 0;
}