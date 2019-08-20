// 1223. [S/W 문제해결 기본] 6일차 - 계산기2
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
      if (str[n] == '*')
        sc.push(str[n]);
      else if (str[n] == '+') {
        while (!sc.empty()) {
          v.push_back(sc.top());

          sc.pop();
        }

        sc.push(str[n]);
      } else
        v.push_back(str[n]);
    }

    while (!sc.empty()) {
      v.push_back(sc.top());

      sc.pop();
    }

    stack<int> si;

    for (int n = 0; n < N; n++) {
      if (v[n] >= '0' && v[n] <= '9')
        si.push(v[n] - '0');
      else {
        int first = si.top();

        si.pop();

        int second = si.top();

        si.pop();

        if (v[n] == '*')
          si.push(first * second);
        else
          si.push(first + second);
      }
    }

    cout << '#' << t << ' ' << si.top() << '\n';
  }

  return 0;
}