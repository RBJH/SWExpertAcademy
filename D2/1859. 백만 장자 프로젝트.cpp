#include <iostream>

using namespace std;

int T, N;

int price[1000000];

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    long long result = 0;

    for (int n = 0; n < N; n++) cin >> price[n];

    int max = price[N - 1];

    for (int n = N - 2; n >= 0; n--) {
      if (price[n] < max)
        result += max - price[n];
      else
        max = price[n];
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}