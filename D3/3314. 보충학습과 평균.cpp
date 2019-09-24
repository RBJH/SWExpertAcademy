#include <iostream>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int score = 0;

    int sum = 0;

    for (int i = 0; i < 5; i++) {
      cin >> score;

      if (score < 40) score = 40;

      sum += score;
    }

    result = sum / 5;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}