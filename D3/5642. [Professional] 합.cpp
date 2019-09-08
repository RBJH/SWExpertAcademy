#include <iostream>

using namespace std;

int T, N;
int result = 0;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    int* arr = new int[N];

    for (int n = 0; n < N; n++) cin >> arr[n];

    result = -1000;

    int cur = 0;

    for (int i = 0; i < N; i++) {
      cur += arr[i];

      if (cur < 0) cur = 0;
      if (result < cur) result = cur;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}