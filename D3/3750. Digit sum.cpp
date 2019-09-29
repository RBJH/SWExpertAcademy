#include <cstdio>

using namespace std;

int T;
int result;

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    long long n;

    scanf("%lld", &n);

    while (n > 9) {
      result = 0;

      while (n) {
        result += n % 10;

        n /= 10;
      }

      n = result;
    }

    result = n;

    printf("#%d %d\n", t, result);
  }

  return 0;
}