#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;
int result = 0;

int main() {
  for (int t = 1; t <= 10; t++) {
    cin >> N;

    vector<int> v;

    int box = 0;

    for (int i = 0; i < 100; i++) {
      cin >> box;

      v.push_back(box);
    }

    for (int n = 0; n < N; n++) {
      sort(v.begin(), v.end());

      if (v[99] - v[0] == 1 || v[99] - v[0] == 0) break;

      v[99]--;
      v[0]++;
    }

    sort(v.begin(), v.end());

    result = v[99] - v[0];

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}