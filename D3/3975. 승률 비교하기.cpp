#include <cstdio>
#include <string>

using namespace std;

int T, A, B, C, D;
string result;

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (A / (float)B > C / (float)D)
      result = "ALICE";
    else if (A / (float)B < C / (float)D)
      result = "BOB";
    else
      result = "DRAW";

    printf("#%d %s\n", t, result.c_str());
  }

  return 0;
}