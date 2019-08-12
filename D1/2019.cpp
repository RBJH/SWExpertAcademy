// 2019. 더블더블
#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  int result = 1;

  for (int n = 0; n < N; n++) {
    cout << result << ' ';

    result *= 2;
  }

  cout << result;

  return 0;
}