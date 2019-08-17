// 1218. [S/W 문제해결 기본] 4일차 - 괄호 짝짓기
#include <iostream>

using namespace std;

int N;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    string str;

    cin >> str;

    int result = 1;

    int paren = 0;
    int square = 0;
    int brace = 0;
    int angle = 0;

    for (int n = 0; n < N; n++) {
      switch (str[n]) {
        case '(':
          paren++;
          break;
        case '[':
          square++;
          break;
        case '{':
          brace++;
          break;
        case '<':
          angle++;
          break;
        case ')':
          paren--;
          break;
        case ']':
          square--;
          break;
        case '}':
          brace--;
          break;
        case '>':
          angle--;
          break;
      }

      if (paren < 0 || square < 0 || brace < 0 || square < 0) {
        result = 0;
        break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}