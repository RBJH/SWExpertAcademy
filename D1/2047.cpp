// 2047. 신문 헤드라인
#include <cstring>
#include <iostream>

using namespace std;

string str;

int main() {
  cin >> str;

  for (int i = 0; i < str.length(); i++)
    if (str[i] >= 'a' && str[i] <= 'z') str[i] += 'A' - 'a';

  cout << str;

  return 0;
}