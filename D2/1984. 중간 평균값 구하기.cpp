#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    vector<int> v;

    int num = 0;

    for (int i = 0; i < 10; i++) {
      cin >> num;

      v.push_back(num);
    }

    sort(v.begin(), v.end());

    int sum = 0;

    for (int i = 1; i < 9; i++) sum += v[i];

    int result = sum / 8.0 + 0.5;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}