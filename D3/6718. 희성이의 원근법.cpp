#include <cstdio>

using namespace std;

int T;
int result;

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    int d;

    scanf("%d", &d);

    int base = 100;

    if (d < 100)
      result = 0;
    else if (d < 1000)
      result = 1;
    else if (d < 10000)
      result = 2;
    else if (d < 100000)
      result = 3;
    else if (d < 1000000)
      result = 4;
    else
      result = 5;

    printf("#%d %d\n", t, result);
  }

  return 0;
}