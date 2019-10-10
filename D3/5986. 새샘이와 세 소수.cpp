#include <cmath>
#include <cstdio>

using namespace std;

int T, N;
int result;

int main() {
  scanf("%d", &T);

  bool prime[1000] = {
      false,
  };

  for (int i = 2; i < 1000; i++) prime[i] = true;

  for (int i = 2; i < sqrt(1000); i++)
    if (prime[i])
      for (int j = i * i; j < 1000; j += i) prime[j] = false;

  for (int t = 1; t <= T; t++) {
    scanf("%d", &N);

    result = 0;

    for (int i = 2; i <= N - 4; i++) {
      if (i * 3 > N) break;

      if (prime[i]) {
        for (int j = i; j <= N - i - 2; j++) {
          if (i + j * 2 > N) break;

          if (prime[j]) {
            int k = N - i - j;

            if (j > k) break;

            if (prime[k]) result++;
          }
        }
      }
    }

    printf("#%d %d\n", t, result);
  }

  return 0;
}