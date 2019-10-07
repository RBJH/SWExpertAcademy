#include <cstdio>
#include <string>

using namespace std;

int T, A, B, C, D;
string result;

void solve(string s, int a, int b, int c, int d) {
  if (result != "") return;
  if (a < 0 || b < 0 || c < 0 || d < 0) return;
  if (b - c > 1 || c - b > 1) return;

  if (a == 0 && b == 0 && c == 0 && d == 0) {
    result = s;
    return;
  }

  if (s[s.length() - 1] == '0') {
    solve(s + "0", a - 1, b, c, d);
    solve(s + "1", a, b - 1, c, d);
  } else {
    solve(s + "0", a, b, c - 1, d);
    solve(s + "1", a, b, c, d - 1);
  }
}

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    scanf("%d %d %d %d", &A, &B, &C, &D);

    result = "";

    solve("0", A, B, C, D);
    solve("1", A, B, C, D);

    if (result == "") result = "impossible";

    printf("#%d %s\n", t, result.c_str());
  }

  return 0;
}