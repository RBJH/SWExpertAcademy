// 1234. [S/W 문제해결 기본] 10일차 - 비밀번호
#include <iostream>
#include <vector>

using namespace std;

int N;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    string str;

    cin >> str;

    vector<char> v;

    for (int n = 0; n < N; n++) v.push_back(str[n]);

    bool flag = true;

    while (flag) {
      flag = false;

      for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] == v[i + 1]) {
          flag = true;

          v.erase(v.begin() + i, v.begin() + i + 2);

          break;
        }
      }
    }

    cout << '#' << t << ' ';

    for (int i = 0; i < v.size(); i++) cout << v[i];

    cout << '\n';
  }

  return 0;
}