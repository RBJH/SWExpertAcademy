#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    long long S1 = (long long)N * (N + 1) / 2;
    long long S2 = (long long)N * N;
    long long S3 = (long long)N * (N + 1);

    cout << '#' << t << ' ' << S1 << ' ' << S2 << ' ' << S3 << '\n';
  }

  return 0;
}