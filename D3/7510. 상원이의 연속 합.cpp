#include <iostream>

using namespace std;

int T, N;
int result;

void solve(int i, int c) {
  int sum = c;

  for (int n = i + 1; n < N; n++) {
    sum += n;

    if (sum > N) break;

    if (sum == N) {
      result++;
      break;
    }
  }
}

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    result = 1;

    for (int i = 1; i <= N / 2; i++) solve(i, i);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}