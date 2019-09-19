#include <iostream>

using namespace std;

int T, N;
int result;

char farm[49][49] = {
    ' ',
};

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    result = 0;

    int b = N / 2;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        cin >> farm[i][j];

        if (j >= b && j < N - b) result += farm[i][j] - '0';
      }

      if (i < N / 2)
        b--;
      else
        b++;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}