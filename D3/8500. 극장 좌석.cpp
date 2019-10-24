#include <algorithm>
#include <iostream>

using namespace std;

int T, N, A[10000];
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    for (int n = 0; n < N; n++) cin >> A[n];

    result = 0;

    sort(A, A + N, greater<int>());

    int left = 0;
    int before = 0;

    for (int n = 0; n < N; n++) {
      left = A[n] - before;

      if (left < 0) left = 0;

      result += left + 1 + A[n];

      before = A[n];
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}