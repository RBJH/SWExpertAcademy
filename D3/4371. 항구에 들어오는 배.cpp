#include <iostream>

using namespace std;

int T, N;
int result;

int day[5000] = {
    0,
};

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    for (int n = 0; n < N; n++) cin >> day[n];

    for (int i = 1; i < N; i++) {
      if (day[i]) {
        int term = day[i] - 1;

        for (int j = i + 1; j < N; j++) {
          if (day[j]) {
            int term2 = day[j] - 1;

            if (!(term2 % term)) day[j] = 0;
          }
        }
      }
    }

    result = 0;

    for (int n = 1; n < N; n++)
      if (day[n]) result++;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}