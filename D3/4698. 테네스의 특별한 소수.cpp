#include <iostream>

using namespace std;

int T, D, A, B;
int result;

int main() {
  bool primes[1000000] = {false};

  for (int i = 2; i < 1000000; i++) primes[i] = true;

  for (int i = 2; i < 1000; i++)
    if (primes[i])
      for (int j = i * i; j < 1000000; j += i) primes[j] = false;

  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> D >> A >> B;

    result = 0;

    int cur = 0;

    for (int i = A; i <= B; i++) {
      if (primes[i]) {
        cur = i;

        while (cur) {
          if (cur % 10 == D) {
            result++;
            break;
          }

          cur /= 10;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}