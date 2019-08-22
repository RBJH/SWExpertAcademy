// 1229. [S/W 문제해결 기본] 8일차 - 암호문2
#include <iostream>
#include <vector>

using namespace std;

int N;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    vector<int> v;

    int password = 0;

    for (int n = 0; n < N; n++) {
      cin >> password;

      v.push_back(password);
    }

    cin >> N;

    char command = ' ';

    int x = 0;
    int y = 0;
    int s = 0;

    for (int n = 0; n < N; n++) {
      cin >> command >> x >> y;

      if (command == 'I') {
        for (int i = 0; i < y; i++) {
          cin >> s;

          v.insert(v.begin() + x + i, s);
        }
      } else
        v.erase(v.begin() + x, v.begin() + x + y);
    }

    cout << '#' << t << ' ';

    for (int i = 0; i < 10; i++) cout << v[i] << ' ';

    cout << '\n';
  }

  return 0;
}