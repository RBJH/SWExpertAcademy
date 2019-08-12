// 2027. 대각선 출력하기
#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == j)
        cout << '#';
      else
        cout << '+';
    }

    cout << '\n';
  }

  return 0;
}