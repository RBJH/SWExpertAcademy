// 2058. 자릿수 더하기
#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  int result = 0;

  while (N) {
    result += N % 10;

    N /= 10;
  }

  cout << result;

  return 0;
}