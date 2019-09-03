#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << '\n';

    cin >> N;

    int arr[7][7] = {
        0,
    };

    for (int i = 0; i < N; i++)
      for (int j = 0; j < N; j++) cin >> arr[i][j];

    for (int i = 0; i < N; i++) {
      for (int k = 0; k < 3; k++) {
        for (int j = 0; j < N; j++) {
          switch (k) {
            case 0:
              cout << arr[N - 1 - j][i];
              break;
            case 1:
              cout << arr[N - 1 - i][N - 1 - j];
              break;
            default:
              cout << arr[j][N - 1 - i];
              break;
          }
        }

        cout << ' ';
      }

      cout << '\n';
    }
  }

  return 0;
}