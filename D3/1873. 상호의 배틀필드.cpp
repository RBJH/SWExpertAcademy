#include <iostream>

using namespace std;

int T, H, W, N;
char result[20][20] = {
    ' ',
};

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> H >> W;

    int x = 0;
    int y = 0;

    for (int h = 0; h < H; h++) {
      for (int w = 0; w < W; w++) {
        cin >> result[h][w];

        if (result[h][w] == '<' || result[h][w] == '>' || result[h][w] == '^' ||
            result[h][w] == 'v') {
          y = h;
          x = w;
        }
      }
    }

    cin >> N;

    char command = ' ';

    for (int n = 0; n < N; n++) {
      cin >> command;

      switch (command) {
        case 'U':
          if (y > 0 && result[y - 1][x] == '.') result[y--][x] = '.';

          result[y][x] = '^';
          break;
        case 'D':
          if (y + 1 < H && result[y + 1][x] == '.') result[y++][x] = '.';

          result[y][x] = 'v';
          break;
        case 'L':
          if (x > 0 && result[y][x - 1] == '.') result[y][x--] = '.';

          result[y][x] = '<';
          break;
        case 'R':
          if (x + 1 < W && result[y][x + 1] == '.') result[y][x++] = '.';

          result[y][x] = '>';
          break;
        default:
          int sx = 0;
          int sy = 0;

          switch (result[y][x]) {
            case '^':
              sy = y - 1;
              sx = x;

              while (sy >= 0) {
                if (result[sy][sx] == '#') break;

                if (result[sy][sx] == '*') {
                  result[sy][sx] = '.';
                  break;
                }

                sy--;
              }
              break;
            case 'v':
              sy = y + 1;
              sx = x;

              while (sy < H) {
                if (result[sy][sx] == '#') break;

                if (result[sy][sx] == '*') {
                  result[sy][sx] = '.';
                  break;
                }

                sy++;
              }
              break;
            case '<':
              sy = y;
              sx = x - 1;

              while (sx >= 0) {
                if (result[sy][sx] == '#') break;

                if (result[sy][sx] == '*') {
                  result[sy][sx] = '.';
                  break;
                }

                sx--;
              }
              break;
            default:
              sy = y;
              sx = x + 1;

              while (sx < W) {
                if (result[sy][sx] == '#') break;

                if (result[sy][sx] == '*') {
                  result[sy][sx] = '.';
                  break;
                }

                sx++;
              }
              break;
          }
          break;
      }
    }

    for (int h = 0; h < H; h++) {
      for (int w = 0; w < W; w++) cout << result[h][w];

      cout << '\n';
    }
  }

  return 0;
}