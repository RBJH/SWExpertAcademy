// 1933. 간단한 N 의 약수
#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  for (int n = 1; n <= N; n++)
    if (!(N % n)) cout << n << ' ';

  return 0;
}