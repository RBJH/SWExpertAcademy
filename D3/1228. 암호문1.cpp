#include <iostream>
#include <vector>

using namespace std;

int N;

int main() {
  for (int t = 1; t <= 10; t++) {
    cout << '#' << t << '\n';

    cin >> N;

    vector<int> v;

    int tmp = 0;

    for (int n = 0; n < N; n++) {
      cin >> tmp;

      v.push_back(tmp);
    }

    cin >> N;

    char I = ' ';

    int x, y, s;

    for (int n = 0; n < N; n++) {
      cin >> I >> x >> y;

      for (int i = 0; i < y; i++) {
        cin >> s;

        v.insert(v.begin() + x + i, s);
      }
    }

    for (int i = 0; i < 10; i++) cout << v[i] << ' ';

    cout << '\n';
  }

  return 0;
}