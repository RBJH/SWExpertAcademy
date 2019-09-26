#include <cstdio>

using namespace std;

int T, N;
int result;

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    scanf("%d", &N);

    result = 0;

    int num = 0;

    for (int n = 0; n < N; n++) {
      scanf("%d", &num);

      if (result * num > result + num)
        result *= num;
      else
        result += num;
    }

    printf("#%d %d\n", t, result);
  }

  return 0;
}