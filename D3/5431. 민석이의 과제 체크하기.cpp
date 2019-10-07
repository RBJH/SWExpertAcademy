#include <iostream>

using namespace std;

int T, N, K;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> N >> K;

    bool students[101] = {
        false,
    };

    int num = 0;

    for (int k = 0; k < K; k++) {
      cin >> num;

      students[num] = true;
    }

    result = 0;

    for (int n = 1; n <= N; n++)
      if (!students[n]) cout << n << ' ';

    cout << '\n';
  }

  return 0;
}