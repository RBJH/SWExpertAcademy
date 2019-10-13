#include <cstdio>

using namespace std;

int T, N;
float result;

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    scanf("%d", &N);

    result = 0.0;

    float p;
    int x;

    for (int n = 0; n < N; n++) {
      scanf("%f %d", &p, &x);

      result += p * x;
    }

    printf("#%d %f\n", t, result);
  }

  return 0;
}