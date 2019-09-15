#include <algorithm>
#include <iostream>

using namespace std;

int T, N;
int result = 0;

string str;

void solve(int b, int n) {
  if (n == N) {
    if (result < stoi(str)) result = stoi(str);
    return;
  }

  for (int i = b; i < str.length() - 1; i++) {
    for (int j = i + 1; j < str.length(); j++) {
      if (str[i] <= str[j]) {
        swap(str[i], str[j]);

        solve(i, n + 1);

        swap(str[i], str[j]);
      }
    }
  }
}

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> str >> N;

    result = stoi(str);

    solve(0, 0);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}