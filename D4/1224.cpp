// 1224. [S/W 문제해결 기본] 6일차 - 계산기3
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int N;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    string str;

    cin >> str;

    stack<char> sc;

    vector<char> v;

    for (int n = 0; n < N; n++) {
      switch (str[n]) {
        case '(':
        case '*':
          sc.push(str[n]);
          break;
        case ')':
          while (sc.top() != '(') {
            v.push_back(sc.top());

            sc.pop();
          }

          sc.pop();
          break;
        case '+':
          while (!sc.empty()) {
            if (sc.top() == '(') break;
            v.push_back(sc.top());

            sc.pop();
          }

          sc.push(str[n]);
          break;
        default:
          v.push_back(str[n]);
          break;
      }
    }

    while (!sc.empty()) {
      v.push_back(sc.top());

      sc.pop();
    }

    stack<int> si;

    for (int i = 0; i < v.size(); i++) {
      if (v[i] >= '0' && v[i] <= '9')
        si.push(v[i] - '0');
      else {
        int first = si.top();

        si.pop();

        int second = si.top();

        si.pop();

        if (v[i] == '*')
          si.push(first * second);
        else
          si.push(first + second);
      }
    }

    cout << '#' << t << ' ' << si.top() << '\n';
  }

  return 0;
}