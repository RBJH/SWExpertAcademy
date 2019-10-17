#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int T, N;
int result;

int main() {
  cin >> T;

  string title = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for (int t = 1; t <= T; t++) {
    cin >> N;

    result = 0;

    vector<char> v;

    string str;

    for (int n = 0; n < N; n++) {
      cin >> str;

      v.push_back(str[0]);
    }

    sort(v.begin(), v.end());

    int cur = 0;

    for (int n = 0; n < N; n++) {
      if (cur > 25) break;

      if (v[n] > title[cur]) break;

      if (v[n] == title[cur]) {
        result++;
        cur++;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}