#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int T, N, M, K;
string result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> M >> K;

    result = "Possible";

    vector<int> v;

    int tmp;

    for (int n = 0; n < N; n++) {
      cin >> tmp;

      v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    int cur = 0;
    int cnt = 0;

    for (int i = 0; i <= v[v.size() - 1]; i++) {
      if (i && !(i % M)) cnt += K;

      if (i == v[cur]) {
        if (cnt) {
          cur++;
          cnt--;
        } else {
          result = "Impossible";
          break;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}