#include <iostream>

using namespace std;

int T, X1, X2, Y1, Y2, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> X1 >> Y1 >> X2 >> Y2;

    cin >> N;

    int x, y;

    int in = 0;
    int on = 0;
    int out = 0;

    for (int n = 0; n < N; n++) {
      cin >> x >> y;

      if (x > X1 && x < X2 && y > Y1 && y < Y2)
        in++;
      else if (x < X1 || x > X2 || y < Y1 || y > Y2)
        out++;
      else
        on++;
    }

    cout << '#' << t << ' ' << in << ' ' << on << ' ' << out << '\n';
  }

  return 0;
}