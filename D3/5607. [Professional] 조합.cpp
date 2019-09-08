#include <iostream>

using namespace std;

int T, N, R;
long long result = 0;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> R;

    result = 1;

    long long factorialR = 0;
    long long factorial = 0;

    for (int n = 1; n <= N; n++) {
      (result *= n) %= 1234567891;

      if (n == R) factorialR = result;
      if (n == N - R) factorial = result;
    }

    long long denominator = (factorialR * factorial) % 1234567891;

    int exponent = 1234567891 - 2;
    long long fermat = 1;

    while (exponent) {
      if (exponent % 2) (fermat *= denominator) %= 1234567891;

      denominator = (denominator * denominator) % 1234567891;
      exponent /= 2;
    }

    (result *= fermat) %= 1234567891;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}