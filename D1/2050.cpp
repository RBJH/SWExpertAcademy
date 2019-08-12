// 2050. 알파벳을 숫자로 변환
#include <cstring>
#include <iostream>

using namespace std;

string str;

int main() {
  cin >> str;

  for (int i = 0; i < str.length(); i++) cout << str[i] - 'A' + 1 << ' ';

  return 0;
}