#include <cstdio>

using namespace std;

int T, D, A, B, F;
float result;

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    scanf("%d %d %d %d", &D, &A, &B, &F);

    float time = D / (float)(A + B);

    result = F * time;

    printf("#%d %f\n", t, result);
  }

  return 0;
}