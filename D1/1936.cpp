// 1936. 1대1 가위바위보
#include <iostream>

using namespace std;

int A, B;

int main() {
  cin >> A >> B;

  char result = 'A';

  if (A - B == -1 || A - B == 2) result = 'B';

  cout << result;

  return 0;
}