#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> N;

    vector<int> v;

    int tmp = 0;

    for (int n = 0; n < N; n++) {
      cin >> tmp;

      v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) cout << v[i] << ' ';

    cout << '\n';
  }

  return 0;
}